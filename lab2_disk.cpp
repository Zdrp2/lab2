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
		table table[100];
		clients->SetClient(&clients[i_cl], &i_cl, "Дмитрий Дмитриевич");
		massagists->SetMassage(&massagists[i_m], &i_m, "Дмитрий Иванович", 13);
		services->SetService(&services[i_sr], &i_sr, "Массаж шеи", 21);
		places->SetPlace(&places[i_p], &i_p, "Иванова", 45);
		table->SetTable(&table[i_t], &i_t, "Роман Евгеньевич", "Иван Иванович", "Массаж лица", "Дмитрова", 17, 1500);
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
						clients->InputClient(&clients[i_cl], i_cl);
						i_cl++;
						printf("\nДобавить еще клиента - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '2': {
					do {
						system("cls");
						massagists->InputMassage(&massagists[i_m], i_m);
						i_m++;
						printf("\nДабавить еще массажиста - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '3': {
					do {
						system("cls");
						services->InputService(&services[i_sr], i_sr);
						i_sr++;
						printf("\nДобавить еще услугу - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '4': {
					do {
						system("cls");
						places->InputPlace(&places[i_p], i_p);
						i_p++;
						printf("\nДобавить еще услугу - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '5': {
					do {
						system("cls");
						table->InputTable(table, clients, massagists, services, places, i_t, i_cl, i_m, i_sr, i_p);
						i_t++;
						printf("\nДобавить еще? - любая клавиша\nЗавершить - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case 27:
					break;
				default:
					printf("\nНе понимаю, что вы хотите сделать\n");
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
				printf("	5 - Вывод записи\n");
				printf("	ESC - выход\n");
				switch (_getch()) {
				case '1': {
					system("cls");
					clients->OutputClient(clients, i_cl);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '2': {
					system("cls");
					massagists->OutputMassage(massagists, i_m);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '3': {
					system("cls");
					services->OutputService(services, i_sr);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '4': {
					system("cls");
					places->OutputPlace(places, i_p);
					printf("\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case '5': {
					system("cls");
					table->OutputTable(table, i_t);
					printf("\n\nНажмите любую клавишу для продолжения\n");
					_getch();
					break;
				}
				case 27:
					break;
				default:
					printf("\nНе понимаю, что вы хотите сделать\n");
					_getch();
					break;
				}
			}
			case 27:
				flag = 1;
				break;
			}
		} while (flag != 1);
		system("cls");
		printf("\nДля завершения программы нажмите ESC\nДля возврата в глвное меню нажмите любую клавишу\n");
	} while (_getch() != 27);
}
