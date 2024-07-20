//============================================================================
// Name        : Training_1.cpp
// Author      : Vladislav Ivanov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

	/*				Решение на "Задачи 1		*/

	/*
	int n;
	cout << "Въведете оценката, която искате да получите на изпита." << endl;
	cin >> n;
	cout << "Резултатът от изпита е: " << n;
	*/


	/* string name, family, spec, email, phone;
	cout << "Въведете последователно име и фамилия: " << endl;
	cin >> name;
	cin >> family;
	cout << "Въведете специалност: " << endl;
	cin >> spec;
	cout << "Въведете вашия имейл адрес: " << endl;
	cin >> email;
	cout << "Въведете вашият телефонен номер" << endl;
	cin >> phone;

	cout << "Име и фамилия: "<< name+" "+ family << endl;
	cout << "Специалност: " << spec << endl;
	cout << "Имейл адрес: " << email << endl;
	cout << "Телефонен номер: " << phone << endl;
	*/

	/* int age;
	cout << "Моля, въведете възрастта си." << endl;
	cin >> age;
	cout << "Вашата възраст е: " << age << endl;
	*/

	/*
	char name[500];
	cout << "Въведете своето име!" << endl;
	cin.getline (name,500);
	cout << "Здравейте, " << name << "!" << endl;
	cout << "Въведете своите години!" << endl;
	cin.getline (name,500);
	cout << "Вие сте на " << name << " години.";
	*/

	/*
	int a, b, sum;
	cout << "Въведете число 1." << endl;
	cin >> a;
	cout << "Въведете число 2." << endl;
	cin >> b;
	sum = a + b;
	cout << "Сборът на двете въведени числа е: " << sum << endl;
	*/

	/*
	int a, b, c, d;
	cout << "Въведете една от страните на правоъгълник." << endl;
	cin >> a;
	cout << "Въведете втората от страните на правоъгълник" << endl;
	cin >> b;
	c = (a*2)+(b*2);
	cout << "Периметъра на правоъгълника е: " << c << endl;
	d = a * b;
	cout << "Лицето на правоъгълника е: " << d << endl;
	*/

	/*
	string a, b, c;
	cout << "Въведете стойност 1." << endl;
	cin >> a;
	cout << "Въведете стойност 2." << endl;
	c = a;
	cin >> b;
	a = b;
	b = c;
	cout << "Стойността 1, която е разменена със стойност 2 е: " << a << endl;
	cout << "Стойността 2, която е разменена със стойност 1 е: " << b << endl;
	 */






	/* 		Решение на "Задачи 2"  */


	/*cout << 27+12 << endl;			/* Сума */
	/*cout << 27-12 << endl;				/* Разлика */
	/*cout	<< 27*12 << endl;				/* Произведение */
	/*cout << 27/12 << endl;				/* Частно */
	/*cout	<< 27%12 << endl;			/* Деление с остатък */

	/*
	int a, b, sum;
	cout << "Въведете число 1." << endl;
	cin >> a;
	cout << "Въведете число 2." << endl;
	cin >> b;
	sum = a+b;
	cout << "Сумата на число 1 и 2 е: " << sum << endl;
	*/

	/*
	int a, b, obikolka, lice;
	cout << "Въведете страна 1 на правоъгълник." << endl;
	cin >> a;
	cout << "Въведете страна 2 на правоъгълник." << endl;
	cin >> b;
	obikolka = (a*2) + (b*2);
	cout << "Обиколката на правоъгълник е: " << obikolka << endl;
	lice = a * b;
	cout << "Лицето на правоъгълник е: " << lice << endl;
	*/

	/*					Елегантно решение за обръщачка на цифри			*/

	/*
	int a, b;
	cout << "Въведете число, което ще бъде изведено на обратно." << endl;
	cin >> a;

	for (int i = 0; i<a;)
	{
		b=a%10;
		a=a/10;
		cout << b << endl;
	}
	*/

	/*			Елегантно решение за обръщачка на цифри	*/
	/*
	int a, b, sum, pro;
	sum=0;
	pro=1;
	cout << "Въведете число, на което цифрите ще бъдат сборувани и умножени." << endl;
	cin >> a;

	for (int i = 0; i<a;)
	{
		b=a%10;
		a=a/10;
		sum=sum+b;
		pro=pro*b;
	}
	cout << "Сборът на цифрите от числото е: " << sum << endl;
	cout << "Произведението на цифрите от числото е: " << pro << endl;
	*/

	/* double p, s;
	double r = 5.1, pi = 3.1415;
	p = 2 * pi * r;
	s = pi * (r*r);
	cout << "Обиколката е: " << p << endl;
	cout << "Лицето е: " << s << endl;
	*/

	/* bool x=true, y=false, z1, z2, z3;
	z1=!x;
	z2=x&&y;
	z3=x||y;
	cout << z1 << endl;
	cout << z2 << endl;
	cout << z3 << endl;
	*/






	/* 			Решение на "Задачи 3"	FOR цикъл			*/

	/*
	for (int n=0; n<=20; n++)
	{
		cout << n << endl;
	}
	*/

	/*
	for (int n=2; n<=20; n+=2)
	{
		cout << n << endl;
	}
	*/

	/*
	for (int n=1; n<=20; n+=2)
	{
		cout << n << endl;
	}
	*/

	/*
	int n;
	cout << "Въведете число, до което ще се покажат всички по-малки от него числа." << endl;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cout << i << endl;
	}
	*/

	/*
	int sum=0;
	for (int n=1; n<=20; n++)
	{
		sum+=n;
	}
	cout << sum << endl;
	*/

	/*
	 * /*  long long е файлов тип за по-големи числа */

	/*
	long long pro=1;
	int n;
	cout << "Въведете число, до което ще бъдат изчислени всички негови производни числа." << endl;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		pro=pro*i;
	}
	cout << "Произведението на числата е: " << pro << endl;
	*/

	/*
	int n, sum=0;
	long long pro = 1;
	cout << "Въведете произволно число, до което ще бъдат сумирани и умножени всички числа, които са по-малки от него" << endl;
	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		sum+=i;
		pro*=i;
	}
	cout << "Сборът на всички по-малки числа е: " << sum << endl;
	cout << "Производното на всички по-малки числа е: " << pro << endl;
	*/

	/*
	int a, n, sum=0;
	long long pro=1;
	cout << "Въведете n на брой числа: " << endl;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		sum+=a;
		pro*=a;
	}
	cout << "Сумата от въведените числа е: " << sum << endl;
	cout << "Произведението от въведените числа е: " << pro << endl;
	*/

	/*
	int a, n, positive=0;
	cout << "Въведете n на брой числа: " << endl;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		if (a > 0)
		{
			positive++;
		}
	}
	cout << "Положителните числа са " << positive << " на брой." << endl;
	*/

	/*
	int a, n, positive=0, negative=0;
	cout << "Въведете n на брой числа: " << endl;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		if (a>0)
		{
			positive++;
		}
		if (a<0)
		{
			negative++;
		}
	}
	cout << "Броят на положителните числа е: " << positive << endl;
	cout << "Броят на отрицателните числа е: " << negative << endl;
	*/

	/*
	int a, n, chetni=0, nechetni=0;
	cout << "Въведете n на брой числа: " << endl;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		if (a%2!=0)
		{
			nechetni++;
		}
		else
		{
			chetni++;
		}
	}
	cout << "Има въведени " << chetni << " четни числа." << endl;
	cout << "Има въведени " << nechetni << " нечетни числа." << endl;
	*/



	/*
	int n;
	long long a ,max, min;
	cout << "Въведете n на брой числа: " << endl;
	cin >> n;
	cout << "Въведете първото число: " << endl;
	cin >> a;
	max = a;
	min = a;
	for (int i=1; i<n; i++)
	{
		cout << "Въведете число: " << endl;
		cin >> a;
		if (max < a)	max=a;
		if (min >= a) min=a;
	}
	cout << "Най-голямото въведено число е: " << max << endl;
	cout << "Най-малкото въведено число е: " << min << endl;
	*/







	/* 					Решение на "Задачи 4" - IF проверки			*/

	/*
	int n;
	cout << "Въведете число, което да бъде проверено дали е четно или нечетно." << endl;
	cin >> n;
	if (n==0)
	{
		cout << "Числото е нула!" << endl;
	}	else if (n%2==0)
		{
		cout << "Числото е четно!" << endl;
		}	else cout << "Числото е нечетно!" << endl;
	*/


	/*
	int n;
	cout << "Въведете броя на желаната от Вас стока." << endl;
	cin >> n;
	if (n>=100) cout << "Получавате 200 лева отстъпка, защото броя на закупената от вас стока е: " << n << " броя." << endl;
	else cout <<"Не получавате отстъпка, защото броя на закупената от вас стока е: " << n << " броя." << endl;
	*/

	/*
	int x, y;
	cout << "Въведете стойностите на x." << endl;
	cin >> x;
	cout << "Въведете стойност на y." << endl;
	cin >> y;
	if (x==0||y==0)
	{
		cout << "Моля, въведете стойност различна от 0" << endl;
	}	else 	{
		if (x<0&&y>0) {
			cout << "II квадрант." << endl;
		} else if (x>0&&y>0) {
			cout << "I квадрант." << endl;
		} else if (x<0&&y<0) {
			cout << "III квадрант." << endl;
		} else if (x>0&&y<0) {
			cout << "IIII квадрант." << endl;
		}
	}
	*/


	/*
	double a, b, c;
	cout << "Въведете три реални числа: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a+b>c) && (a+c>b) && (b+c>a))
	{
		cout << "Стойностите, които са въведени могат да образуват триъгълник." << endl;
	} else {
		cout << "Стойностите, които са въведени не могат да образуват триъгълник." << endl;
	}
	*/

	/*

	int n, cifra, sum=0;
	cout << "Въведете число, чиято сума от съставляващите го цифри, да бъдат проверени дали са четни или нечетни." << endl;
	cin >> n;
	for (int i = 0; i<n;)
	{
		cifra=n%10;
		n=n/10;
		sum+=cifra;
	}
	if (sum%2!=0) cout << "Числото " << sum << " е нечетно." << endl;
	else cout << "Числото " << sum << " е четно." << endl;

	return 0;
	*/


	/*
	int n, cifra, sum=0;
	cout << "Въведете число, чиято сума от съставляващите го цифри, да бъде проверена дали се дели на 5, без остатък." << endl;
	cin >> n;
	for (int i=0; i<n;)
	{
		cifra=n%10;
		sum+=cifra;
		n=n/10;
	}
	if (sum%5==0) cout << "Сумата от съставляващите цифри на числото е кратна на 5." << endl;
	else cout <<"Сумата от съставляващите цифри на числото не е кратна на 5." << endl;
	*/

	/*
	int n, cifra, sum=0;
	cout << "Въведете число, чиято сума от съставляващите го цифри да бъде проверена дали се дели на 7 без остатък" << endl;
	cin >> n;
	for (int i = 0; i<n;)
	{
		cifra = n%10;
		sum+=cifra;
		n=n/10;
	}
	if (sum%7==0) cout << "Сборът от цифрите в числото е кратен на 7." << endl;
	else cout << "Сборът от цифрите в числото не е кратен на 7." << endl;
	*/

	/*
	int n, masiv[4], a=3;
	cout << "Въведете число, което да бъде проверено дали е симетрично." << endl;
	cin >> n;
	for (int i = 0; i<n;)
	{
		masiv[a] = n%10;
		n=n/10;
		a--;
	}
	if (masiv[0]==masiv[3]&&masiv[1]==masiv[2]) cout << "Числото е симетрично!" << endl;
	else cout << "Числото не е симетрично!" << endl;
	*/


	/*
	int n, masiv[4], a=3;
	cout << "Въведете число, което да бъде проверено дали при сборуване на първата и последната цифра ще е равно на сбора от втората и третата." << endl;
	cin >> n;
	for (int i = 0; i<n;)
	{
		masiv[a]=n%10;
		n=n/10;
		a--;
	}
	if (masiv[0]+masiv[3]==masiv[1]+masiv[2]) cout<<"Сборът от цифра 1 и 4 е равен на сборът от цифра 2 и 3." << endl;
	else cout << "Сборът от цифра 1 и 4 не е равен на сборът от цифра 2 и 3." << endl;
	*/





	/* 				Решение на "Задачи 6" - While цикъл   			*/

	/*
	int n, a=1;
	cout << "Въведете число N, до което ще бъдат изведени всички по-малки от него числа." << endl;
	cin >> n;
	while (n>=a)
	{
		cout << a << endl;
		a++;
	}
	*/


	/*
	int n;
	cout << "Въведете число в интервала от 1 до 10." << endl;
	cin >> n;
	while (n<1 || n>10)
	{
		cout << "Въведете ново сичло, което е в интервал от 1 до 10." << endl;
		cin >>n;
	}
	cout << "Квадратът на въведеното число е: " << n*n << endl;
	*/

	/*
	long long r;
	double pi= M_PI;
	cout << "Въведете радиус на окръжност." << endl;
	cin >> r;
	while (r<0)
	{
		cout << "Моля, въведете число, което е по-голямо от 0." << endl;
		cin >> r;
	}
	cout << "Дължината на окръжността е: " << 2*r*pi << endl;;
	*/

	/*
	int n, i=1;
	cout << "Въведете число, до което да се изведат всички по-малки от него." << endl;
	cin >> n;
	do
	{
		cout << i << endl;
		i++;
	}
	while (i<=n);
	*/


	/*			Интересно решение на задача с използването на масив и while цикъл;


	long long n;
	int i=0, number=1, length, masiv[999];
	bool pet = false;
	cout << "Въведете число, което да бъде проверено дали съдържа цифрата 5." << endl;
	cin >> n;
	length=std::to_string(n).length()-1;												/* Открива дължината на числото (-1 заради масива) */
	/*
	while (n>0)
	{
		masiv[i]=n%10;
		if (masiv[i]==5) pet = true;
		n=n/10;
		i++;
	}
	while (length>=0)
	{
		cout << "Цифрa №" << number << " e " << masiv[length] << endl;
		length--;
		number++;
	}
	if (pet==false) cout << "Във въведеното число няма цифрата 5." << endl;
	if (pet==true) cout << "Във въведеното число има цифрата 5." << endl;
	*/


	/*
	 long long n;
	    cout << "Въведете положително цяло число: ";
	    cin >> n;

	    if (n < 0) {
	        cout << "Грешка! Факториелът на отрицателно число не съществува." << endl;
	    } else {
	        int result = 1;
	        for (int i = 1; i <= n; ++i) {
	            result *= i;
	            cout << result << endl;
	        }
	        cout << "Факториелът на " << n << " е " << result << endl;
	    }
	    */






	/*			Решение на "Задачи 7" - Линейни алгоритми */

	/*			Сантиметри в метри
	double santimeters, meters;
	cout << "Въведете цифра в сантиметри, която да бъде преобразувана в метри." << endl;
	cin >> santimeters;
	meters = santimeters / 100;
	cout << "Въведените " << santimeters << " сантиметра, са равни на " << meters << " метра." << endl;
	*/

	/*			Метри в сантиметри
	double meters, santimeters;
	cout << "Въведете цифра в метри, която да бъде преобразувана в сантиметри." << endl;
	cin >> meters;
	santimeters = meters*100;
	cout << "Въведените " << meters << " метра, са равни на " << santimeters << " сантиметра." << endl;
	*/

	/*
	double hours, minutes, seconds;
	cout << "Въведете час, който да бъде преобразуван в минути и секунди." << endl;
	cin >> hours;
	minutes = hours*60;
	seconds = minutes*60;
	cout << "Въведеният час се равнява на " << minutes << " минути и " << seconds << " секунди." << endl;
	*/

	/*
	int bytes, kilobytes;
	cout << "Въведете байтове, които ще бъдат преобразувани в килобайтове." << endl;
	cin >> bytes;
	kilobytes = bytes/1024;
	cout << "Файлът заема " << kilobytes << " килобайта." << endl;
	*/

	/*
	int masiv[999], n, i=0, length;
	cout << "Въведете число, което да бъде преобразувано в цифри с разменени места." << endl;
	cin >> n;
	length = to_string(n).length();
	cout << "Числото на обратно е ";
	while (n>0)
	{
		masiv[i]=n%10;
		cout << masiv[i];
		n=n/10;
		i++;
	}
	cout << endl << "Числото, което въведохте е ";
	for (length>=0;length--;)
	{
		cout << masiv[length];
	}
	*/

	/*								Проверка на дължината на цифра.
	int n, length;
	length = to_string(n).length();
	*/

	/*
	long long n, length, masiv[999], i=0;
	string type[18];
	type[18]="Квинтилионни: ";
	type[17]="Стоквадрилионни: ";
	type[16]="Десетоквадрилионни: ";
	type[15]="Квадрилионни: ";
	type[14]="Стотрилионни: ";
	type[13]="Десетотрилионни: ";
	type[12]="Трилионни: ";
	type[11]="Стомилиардни: ";
	type[10]="Десетомилиардни: ";
	type[9]="Милиардни: ";
	type[8]="Стомилионни: ";
	type[7]="Десетомилионни: ";
	type[6]="Милионни: ";
	type[5]="Стохилядни: ";
	type[4]="Десетохилядни: ";
	type[3]="Хилядни: ";
	type[2]="Стотици: ";
	type[1]="Десетици: ";
	type[0]="Единици: ";
	cout << "Въведете число, което да бъде разделено на неговите съставни цифри." << endl;
	cin >> n;
	length=to_string(n).length();
	while (n>0)
	{
		masiv[i]=n%10;
		n=n/10;
		i++;
	}
	for (length>=0; length--;)
	{
		cout << type[length] << masiv[length] << endl;
	}
	*/

	/*
	int masiv[999], n, pro=1, length, i=0;
	double sum=0, average;
	cout << "Въведете число, чиито цифри да бъдат сумирани, умножени и изчислено тяхното средноаритметично." << endl;
	cin >> n;
	length=to_string(n).length();
	average=length;
	while(n>0)
	{
		masiv[i]=n%10;
		n=n/10;
		i++;
	}
	for(length>=0; length--;)
	{
		sum+=masiv[length];
		pro*=masiv[length];
	}
	average=sum/average;
	cout << "Сумата от цифрите е: " << sum << endl << "Произведението е: " << pro << endl << "Средноаритметичното е: " << average << endl;
	*/


	/*
	int a, b, br=0;
	cout << "Въведете дължината на коридора." << endl;
	cin >> a;
	cout << "Въведете дължината на пътеката." << endl;
	cin >> b;
	while (b>a)
	{
		cout << "Въведете дължината на пътеката, която трябва да е по-малка от тази на коридора!" << endl;
		cin >> b;
	}
	while (b<=a)
	{
		a=a-b;
		br++;
	}
	cout << "Ще са необходими " << br << " брой пътеки и ще остане " << a << " метра назастелена част от коридора." << endl;
	*/

	/*
	double pi=M_PI, r, length;
	cout << "Въведете радиуса на градинката: " << endl;
	cin >> r;
	length = 2*pi*r;
	cout << "Трябва да се закупи " << length << " метра телена мрежа." << endl;
	*/


	/*
	int n;
	double santimeters, pokrivka;
	cout << "Въведете броя на масите, за които е необходима покривка." << endl;
	cin >> n;
	cout << "Въведете дължината на всяка от масите." << endl;
	cin >> santimeters;
	pokrivka = n*(santimeters+40)/100;
	cout << "Необходимият плат е " << setprecision(2) << fixed << pokrivka << " метра." << endl;

	/* 				setprecision(2) << fixed << - за да се показват 2 знака след десетичен разделител.
	*/


	/*
	double tempC, tempF;
	cout << "Въведете температура в C, която ще бъде показана във F." << endl;
	cin >> tempC;
	tempF = (tempC*9)/5-32;
	cout	<< "Температурата по Фаренхайт е: " << setprecision(2) << fixed <<  tempF << endl;		/* Задължително	 #include <iomanip> */


	/*
	int n, i=0, masiv[999], length;
	cout << "Въведете число, което да бъде показано в обратен ред." << endl;
	cin >> n;
	length = to_string(n).length();
	cout << "Числото, което въведохте в обратен ред е:	";
	while (n>0)
	{
		masiv[i]=n%10;
		n=n/10;
		cout << masiv[i];
		i++;
	}
	cout << endl << "Числото, което въведохте е:			";
	for (length>=0; length--;)
	{
		cout << masiv[length];
	}
	*/







	/* 			Решение на "Задачи 8" - Структурен тип данни Масив		*/
	/*
	int masiv[4];
	cout << "Въведете 5 числа. " << endl;
	for (int i=0; i<5; i++)
	{
		cout << "Въведете " << i << " позиция от масива." << endl;
		cin >> masiv[i];
		cout << endl;
	}
	cout << "Край на въвеждането." << endl;
	*/


	/*
	int arr[5]={10, 12, 0, -3, 5};
	for (int i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
	*/


	/*
	int n, i;
	cout << "Въведете N на брой числа, които да се запаметят в масив." << endl;
	cin >> n;
	int masiv[n];

	for (i=0; i<n; i++)
	{
		cin >> masiv[i];
	}
	cout << "Край на въвеждането! Вие въведохте следните числа: " << endl;

	for (i=0; n>i; i++)
	{
		cout << masiv[i] << endl;
	}
	*/


	/*
	int i, n;
	cout << "Въведете N на брой числа, които ще бъдат запаметени в масив и показани на обратно." << endl;
	cin >> n;
	int masiv[n];
	for (i=0; i<n; i++)
	{
		cin >> masiv[i];
	}
	cout << "Вие въведохте следните числа в масива: " << endl;
	for (i>=0; i--;)
	{
		cout << masiv[i] << endl;
	}
	*/


	/*
	int pro=1, sum=0, i, masiv[7];
	for (i=0; i<7; i++)
	{
		cout << "Въведете число №" << i+1 << endl;
		cin >> masiv[i];
		sum+=masiv[i];
		pro*=masiv[i];
	}
	cout << "Сумата от въведените числа е " << sum << endl;
	cout << "Произведението на числата е " << pro << endl;
	*/


	/*
	int chislo=0, i, masiv[7];
	double sum=0;

	cout << "Въведете 7 числа, на които ще бъде изчислена средно аритметичната стойност." << endl;
	for (i=0; i<7; i++)
	{
		cout << "Моля, въведете число №" << chislo+1 << endl;
		cin >> masiv[i];
		sum+=masiv[i];
		chislo++;
	}
	double average=sum/chislo;
	cout << "Средно аритметичната стойност на числата е " << average << endl;
	*/


	/*
	int i, n, sum=0, broi=0;
	cout << "Въведете N на брой числа, които ще бъдат проверени за отрицателни стойности." << endl;
	cin >> n;
	int masiv[n];
	for (i=0; i<n; i++)
	{
		cout << "Моля въведете число №" << i+1 << endl;
		cin >> masiv[i];
		if (masiv[i]<0)
			{
			sum+=masiv[i];
			broi++;
			}
	}
	cout << "Броят на отрицателните числа е:  " << broi << endl;
	cout << "Сумата на отрицателните числа е: " << sum << endl;
	*/


	/*
	int i, n, pro=1, broi=0;
	cout << "Моля, въведете броя на числата, които ще бъдат проверени дали са четни и умножени ако са такива." << endl;
	cin >> n;
	int masiv[n];
	for (i=0; i<n; i++)
	{
		cout << "Моля въведете число №" << i+1 << endl;
		cin >> masiv[i];
		if (masiv[i]%2==0)
		{
			pro*=masiv[i];
			broi++;
		}
	}
	cout << "Има " << broi << " на брой числа, чието произведение е " << pro;
	*/





	/*			Заиграване със стрингове и символи			*/
	/*
	string duma;
	int n, length;
	cout << "Моля, въведете дума." << endl;
	cin >> duma;
	cout << "Моля въведете коя подред буква искате да бъде изведена." << endl;
	cin >> n;

	length=duma.length();
	char c =duma[n-1];

	cout << n <<" буква от думата е: " << endl << c << endl;
	cout << "Вашата дума изписана на обратно е: " << endl;
	for (length>=0; length--;)
	{
		cout << duma[length];
	}
	*/




	/* 		Домашна работа №1 		*/
	/*
	string name;
	int ages;
	cout << "Моля, въведете вашето име." << endl;
	cin >> name;
	cout << "Моля, въведете вашата възраст." << endl;
	cin >> ages;
	cout << "Здравейте, " << name << "!" << endl;
	cout << "Вие сте на " << ages << " години." << endl;
	*/


	/*
	int meters, santimeters;
	cout << "Моля, въведете стойност в метри, която да бъде преобразувана в сантиметри." << endl;
	cin >> meters;
	santimeters=meters*100;
	cout << "Въведените от вас " << meters << " метър/метра са равни на " << santimeters << " сантиметра" << endl;
	*/


	/*
	int bytes, kilobytes;
	cout << "Моля въведете байтове, които ще бъдат преобразувани в килобайтове." << endl;
	cin >> bytes;
	kilobytes = bytes/1024;
	cout << "Въведените от вас " << bytes << " се равняват на " << kilobytes << " килобайта." << endl;
	*/


	/*
	int n, length, i;
	string type[18];
	type[18]="Квинтилионни: ";
	type[17]="Стоквадрилионни: ";
	type[16]="Десетоквадрилионни: ";
	type[15]="Квадрилионни: ";
	type[14]="Стотрилионни: ";
	type[13]="Десетотрилионни: ";
	type[12]="Трилионни: ";
	type[11]="Стомилиардни: ";
	type[10]="Десетомилиардни: ";
	type[9]="Милиардни: ";
	type[8]="Стомилионни: ";
	type[7]="Десетомилионни: ";
	type[6]="Милионни: ";
	type[5]="Стохилядни: ";
	type[4]="Десетохилядни: ";
	type[3]="Хилядни: ";
	type[2]="Стотици: ";
	type[1]="Десетици: ";
	type[0]="Единици: ";
	cout << "Моля, въведете число, което да бъде разделено на своите съставни цифри." << endl;
	cin >> n;

	length=to_string(n).length();
	int masiv[length];

	for (i=0; 0<n; i++)
	{
		masiv[i]=n%10;
		n=n/10;
	}
	for (length<=0; length--;)
	{
		cout << type[length] << masiv[length] << endl;
	}
	*/


	/*
	double tempC, tempF;
	cout << "Моля, въведете температура в C, която да бъде преобразувана във F." << endl;
	cin >> tempC;
	tempF=(tempC*9)/5+32;
	cout << "Температурата, която въведохте в C " << setprecision(2) << fixed << tempC << " е равна на " << tempF << " po F." << endl;
	*/








	/*				Домашна работа №2					*/
	/*
	double a, b;
	cout << "Моля въведете 2 числа, от които да бъде показано по-малкото." << endl;
	cin >> a;
	cin >> b;
	if (a>b) {
		cout << "По-малкото число е " << b;
	} else if (b>a) {
		cout << "По-малкото число е " << a;
	} else {
		cout << "Числата са равни.";
	}
	*/


	/*
	double x, y;
	cout << "Моля, въведете  стойности за X на квадрант." << endl;
	cin >> x;
	cout << "Моля, въведете  стойности за Y на квадрант." << endl;
	cin >> y;
	while (x==0 || y==0)
		{
		if (x==0) {
			cout << "Моля, въведете стойности на X, която е различна от 0." << endl;
			cin >> x;
		} if (y==0) {
			cout << "Моля, въведете стойности на Y, която е различна от 0." << endl;
			cin >> y;
		}
	}
	if (x>0 && y>0) {
		cout << "Координатите, " << x << " и " << y << " ,които сте въвели отговарят за I квадрант." << endl;
	} else if (x<0 && y>0) {
		cout << "Координатите, " << x << " и " << y << " ,които сте въвели отговарят за II квадрант." << endl;
	} else if (x<0 && y<0) {
		cout << "Координатите, " << x << " и " << y << " ,които сте въвели отговарят за III квадрант." << endl;
	} else if (x>0 && y<0) {
		cout << "Координатите, " << x << " и " << y << " ,които сте въвели отговарят за IV квадрант." << endl;
	}
	*/


	/*
	long long chislo, n;
	int length, pro=1;
	cout << "Моля, въведете число, чиито цифри ще бъдат умножени и ще се извърши проверка, дали резултата е кратен на 7." << endl;
	cin >> chislo;
	n = chislo;
	length=to_string(chislo).length();
	int masiv[length];

	for(int i=0; n>0; i++)
	{
		masiv[i]=n%10;
		n=n/10;
	}
	cout << "Цифрите от числото " << chislo << " са: ";
	for(length<=0; length--;)
	{
		cout << masiv[length] << "; ";
		pro*=masiv[length];
	}
	cout << "които въведохте от клавиатурата ";
	if (pro%7==0) {
		cout << "са кратни на 7." << " Произведението е: " << pro << endl;
	} else if (pro%7!=0) {
		cout << "не са кратни на 7." << " Произведението е: " << pro << endl;
	}
	*/


	/*
	int length, i=0, n=0;
	long long chislo;
	cout << "Моля въведете четно число, което да бъде проверено дали има равна първа и последна цифра." << endl;
	cin >> chislo;
	length=to_string(chislo).length();
	int masiv[length];
	int sum[length/2];

	while (chislo>0) {
		masiv[n]=chislo%10;
		chislo=chislo/10;
		n++;
	}
	n--;
	if (length%2==0) {
		cout << endl << "Числото може да бъде проверено!" << endl;
		while (i<length/2)
		{
			sum[i]=masiv[i]+masiv[n];
			cout << sum[i] << "=" << masiv[i] << "+" <<masiv[n] << endl;
			n--;
			i++;
		}
		i=0, n=length/2-1;
		if (length/2%2==0) {
			while (i<length/2/2) {
				cout << sum[n] << endl << sum[i] << endl;
				if (sum[i]==sum[n]) cout << "Сумите " << sum[i] << " и " << sum[n] << " са равни." << endl;
				if (sum[i]!=sum[n]) cout << "Сумите " << sum[i] << " и " << sum[n] << " не са равни." << endl;
				n--;
				i++;
			}
		} else if (length/2%2!=0) {
			cout << "Общият брой на сумите от цифрата е нечетен." << endl;
		}
	} else if (length%2!=0) {
		cout << "Общият брой на числата от цифрата е нечетен." << endl;
	}
	*/


	/*
	int weekend;
	cout << "Въведете номер на ден от седмицата, който ще бъде изведен с думи." << endl;
	cin >> weekend;
	switch(weekend)
	{
		case(1): cout << "Денят от седмицата е понеделник!" << endl; break;
		case(2): cout << "Денят от седмицата е вторник!" << endl; break;
		case(3): cout << "Денят от седмицата е сряда!" << endl; break;
		case(4): cout << "Денят от седмицата е четвъртък!" << endl; break;
		case(5): cout << "Денят от седмицата е петък!" << endl; break;
		case(6): cout << "Денят от седмицата е събота!" << endl; break;
		case(7): cout << "Денят от седмицата е неделя!" << endl; break;
		default: cout << "Въвели сте ден, който не е от 1 до 7." << endl; break;
	}
	*/


	/*
	int weekend;
	cout << "Въведете номер на ден от седмицата, който ще бъде изведен с думи." << endl;
	cin >> weekend;
	switch(weekend)
	{
		case(1): cout << "Денят от седмицата е работен!" << endl; break;
		case(2): cout << "Денят от седмицата е работен!" << endl; break;
		case(3): cout << "Денят от седмицата е работен!" << endl; break;
		case(4): cout << "Денят от седмицата е работен!" << endl; break;
		case(5): cout << "Денят от седмицата е работен!" << endl; break;
		case(6): cout << "Денят от седмицата е почивен!" << endl; break;
		case(7): cout << "Денят от седмицата е почивен!" << endl; break;
		default: cout << "Въвели сте ден, който не е от 1 до 7." << endl; break;
	}
	*/


	/*
	double a, b, c;
	cout << "Моля въведете 3 реални числа, които ще бъдат страни на триъгълник." << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a+b>c && a+c>b && b+c>a)
	{
		if (a==b && a==c) {
			cout << "Триъгълникът е равностранен!" << endl;
		} else if (a==b || a==c || b==c) {
			cout << "Триъгълникът е равнобедрен!" << endl;
		} else if (a!=b && a!=c && b!=c) {
			cout << "Триъгълникът е разностранен!" << endl;
		}
	} else cout << "Такъв триъгълник не съществува!" << endl;
	*/


	/*
	int a, b;
	double result;
	char c;
	cout << "Моля въведете число 1." << endl;
	cin >> a;
	cout << "Моля въведете число 2." << endl;
	cin >> b;
	cout << "Моля, въведете операция, която искате да се извърши с числата." << endl;
	cin >> c;
	 switch (c) {
	    case '+': result = a + b; break;
	    case '-': result = a - b; break;
	    case '*': result = a * b; break;
	    case '%': result = a % b; break;
	    case '/':
	        if (a != 0) {
	            result = (double)a / b;
	        } else cout << "Грешка: числото 0 не се дели." << endl; break;
	    default:  cout << "Грешка: въведен е грешен оператор." << endl; break;
	    }
	cout << a << c << b << " = " << setprecision(2) << fixed << result << endl;
	*/





}
