#include <iostream>
#include "osn.h"
#include "table.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		int flag = 0, i_cl = 0, i_m = 0, i_sr = 0, i_p = 0, i_t = 0;
		client clients[100];
		massage massagists[100];
		service services[100];
		place places[100];
		table table[100], tables[5][5];
		clients->SetClient(&i_cl, "Lflfflо");
		massagists->SetMassage(&i_m, "Кdffd dsg", 13);
		services->SetService(&i_sr, "Массаж ног", 21);
		places->SetPlace(&i_p, "Ленина", 45);
		table->SetTable(&i_t, "sdfdg", "dfgdf", "dfgdfg", "dfgdfg", 17, 1500);
		table->SetTable(&i_t, "DDDD", "DDDFF", "DSSSS", "AAAA", 17, 1500);
		do {
			flag = 0;
			system("cls");
			printf("	Программный модуль учета клиентов массажного салона\n\n");
			printf("	1 - Ввод данных\n");
			printf("	2 - Вывод данных\n");
			printf("	ESC - выход\n");
			switch (_getch()) {
			case '1': {
				system("cls");
				printf("	Ввод данных\n\n");
				printf("	1 - ввод данных о клиентах\n");
				printf("	2 - ввод данных о массажистах\n");
				printf("	3 - ввод данных об услугах\n");
				printf("	4 - ввод данных о пунктах\n");
				printf("	5 - ввод записи\n");
				printf("	ESC - выход\n");
				switch (_getch()) {
				case '1': {
					do {
						system("cls");
						clients->InputClient(i_cl);
						i_cl++;
						printf("\nДобавить еще клиента - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '2': {
					do {
						system("cls");
						massagists->InputMassage(i_m);
						i_m++;
						printf("\nДабавить еще массажиста - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '3': {
					do {
						system("cls");
						services->InputService(i_sr);
						i_sr++;
						printf("\nДобавить еще услугу - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '4': {
					do {
						system("cls");
						places->InputPlace(i_p);
						i_p++;
						printf("\nДобавить еще адрес - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '5': {
					do {
						system("cls");
						table->InputTable(clients, massagists, services, places, i_t, i_cl, i_m, i_sr, i_p);
						i_t++;
						printf("\nДобавить еще запись - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case 27:
					break;
				default:
					printf("\nПовторите попытку\n");
					_getch();
					break;
				}
				break;
			}
			case '2': {
				system("cls");
				printf("	Вывод данных\n\n");
				printf("	1 - Вывод данных о клиентах\n");
				printf("	2 - Вывод данных о массажистах\n");
				printf("	3 - Вывод данных об услугах\n");
				printf("	4 - Вывод данных о пунктах\n");
				printf("	5 - Вывод записей\n");
				printf("	ESC - выход\n");
				switch (_getch()) {
				case '1': {
					system("cls");
					clients->OutputClient(i_cl);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '2': {
					system("cls");
					massagists->OutputMassage(i_m);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '3': {
					system("cls");
					services->OutputService(i_sr);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '4': {
					system("cls");
					places->OutputPlace(i_p);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '5': {
					system("cls");
					table->OutputTable(i_t);
					printf("\n\nДвумерные массивы:\n");
					tables[0][0] = table[0];
					tables[0][1] = table[1];
					for (int i = 0; i < 1; i++) {
						for (int j = 0; j < 2; j++) {
							tables[i][j].OutputTable(1);
						}
						puts("");
					}
					printf("\n\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case 27:
					break;
				default:
					printf("\nПовторите попытку\n");
					_getch();
					break;
				}
			}
			case 27:
				break;
			}
		} while (flag != 1);
		system("cls");
		printf("\nДля завершения программы нажмите ESC\nДля возврата в глвное меню нажмите любую клавишу\n");
	} while (_getch() != 27);
	
}
