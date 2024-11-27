//1

/*

#include<iostream>
using namespace std;

double harmonic(double x, double y) ;

int main(){
	int a, b;
	cout << "input two integars" << endl;
	cin >> a >> b;
	while (a!=0 && b!=0) {
		cout << harmonic(a, b);
		cout << "input two integars" << endl;
		cin >> a >> b;
	}

	return 0;
}

double harmonic(double x, double y) {
	return 2.0*x * y / (x + y);
}
*/


//2


/*
#include <iostream>
using namespace std;
const int SIZE = 10;

void input(int grades[],int* p);
void show(int arr[],int count);
double average(int arr[],int count);

int	main() {
	int count = 0;
	int* p = &count;
	int grades[SIZE] = {0};
	input(grades,p);
	show(grades,count);
	cout << "average is: " << average(grades,count);
	return 0;
}

void input(int grades[],int* p) {
	int temp = 0;
	for (int i = 0;i < SIZE;i++) {
		cout << "input your grades, type negative number to quit"<<endl;
		cin >> temp;
		if (temp < 0) {
			break;
		}
		else if (!cin) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "Bad input"<<endl;
			break;
		}
		else {
			grades[i] = temp;
			*p++;
		}
	}
}

void show(int arr[],int count) {
	for (int j = 0;j < SIZE;j++) {
		cout << j+1 <<": " << arr[j] << endl;
	}
}

double average(int arr[],int count) {
	double sum=0;
	for (int k = 0;k < SIZE;k++) {
		sum += arr[k];
	}
	return sum / SIZE;
}*/



//3


/*
#include<iostream>
using namespace std;

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box a);
void calc(box* p);

int main() {
	box x = { "charlie",1,2,3,0 };
	box* p = &x;
	calc(p);
	show(x);
	return 0;
}

void show(box a) {
	cout << "box: " << endl;
	cout << "maker: " << a.maker << endl;
	cout << "height: " << a.height << endl;
	cout << "width: " << a.width << endl;
	cout << "length: " << a.length << endl;
	cout << "volume: " << a.volume << endl;
}

void calc(box* p)
{
	p->volume = (p->height * p->length * p->width);
}
*/


//4



/*#include<iostream>
using namespace std;
double posibility(unsigned numbers,unsigned picks,unsigned special);

int main() {
	unsigned field, special, pick;
	cout << "Enter the total field number,special number and picks allowed:";
	while ((cin >> field >> special >> pick) && pick <= field) {
		cout << "You have one chance in" << posibility(field, pick, special)<<" of winning "<<endl;
		cout << "Next (q to quit)";
	}
	cout << "quit";
	return 0;
}
double posibility(unsigned numbers, unsigned picks, unsigned special){
	
	long double result = 1;
	unsigned i = 1;
	long double j = numbers;
	for (;i <= picks;i++, j--) {
		result *= (j / i);
	}
	return result * special;
}*/


//5


//这个程序最多只能准确算到32！，之后的都超范围了

/*#include <iostream>
using namespace std;

unsigned long factorial(unsigned long i);

int main() {
	cout << "Enter a positive number: ";
	unsigned long a;
	while (cin >> a && a>0) {
		cout << a << "! = " << factorial(a)<< endl;
		cout << "Next: (enter a negative number to quit)";
	}
	cout << "quit";
	return 0;
}

unsigned long factorial(unsigned long i) {
	unsigned long result = 1;
	for (;i > 0;i--) {
		result *= i;
	}
	return result;
}
*/



//6  这几个函数可能会有用


/*
#include<iostream>
using namespace std;

const int max_size = 5;

int Fill_array(double arr[], int arr_size);//填数组（可以不填完）
void Show_array(double arr[], int arr_size);//展示内容(记得传入真实count的个数)
void Reverse_array(double arr[],const int arr_size);//反转(记得传入真实count的个数)


int main() {
	double test[max_size];
	int valid_size;
	valid_size = Fill_array(test, max_size);
	Show_array(test, valid_size);
	Reverse_array(test, valid_size);
	Show_array(test, valid_size);
	if (valid_size <= 2) {
		cout << "Too short to continue" << endl;
	}
	else {
		double copy[max_size];
		for (int i = 1;i < valid_size - 1;i++) {
			copy[i - 1] = test[i];
		}
		for (int i = 0;i < valid_size - 2;i++) {
			test[i] = copy[i];
		}
		Reverse_array(test, valid_size - 2);
		Show_array(test, valid_size-2);
	}
	return 0;
}

int Fill_array(double arr[], int arr_size) {
	double temp;
	int count = 0;
	cout << "Enter a rational number:";
	while (count<arr_size && cin >> temp) {//这里的顺序很重要，利用了短路
		arr[count] = temp;
		count ++;
		if (count < arr_size) {
			cout << "Next: (type q to exit)";
		}
	}
	return count;
}

void Show_array(double arr[], int arr_size) {
	cout << endl;
	for (int i = 0;i < arr_size;i++) {
		cout << "Element " << i + 1 << ": " << arr[i] << endl;
	}
}

void Reverse_array(double arr[],int arr_size) {
	int i = 0;
	double temp;
	int j = arr_size-1;
	while(i<j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}


*/


//7
//8
//9  展示了结构函数的一些例子

/*
#include<iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main() {
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n') {//把前面输入流中的换行符去掉，防止下面的getinfo被直接终止
		continue;
	}
	student* ptr_stu = new student[class_size];//动态结构
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0;i < entered;i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done!"<< endl;
	return 0;
}


int getinfo(student pa[], int n) {
	cout << "Student information collect. Empty line to exit." << endl;
	int count = 0;
	while (count < n) {
		cout << "Please enter fullname: ";
		cin.getline(pa[count].fullname, SLEN);
		if (strlen(pa[count].fullname) == 0) {
			cout << "Empty line detected. Exiting..."<<endl;
			break;
		}
		else {
			cout << "Please enter hobby: ";
			cin.getline(pa[count].hobby, SLEN);
			cout << "Please enter ooplevel: ";
			cin >> pa[count].ooplevel;
			cout << endl;
			count++;
			cin.get();
		}
	}
	return count;
}

void display1(student st) {
	cout << "Student Information:" << endl;
	cout << "  Name: " << st.fullname << endl;
	cout << "  Hobby: " << st.hobby << endl;
	cout << "  Ooplevel: " << st.ooplevel << endl;
}

void display2(const student* ps) {
	cout << "Student Information:(using pointer as argument)" << endl;
	cout << "  Name: " << ps->fullname << endl;
	cout << "  Hobby: " << ps->hobby << endl;
	cout << "  Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0;i < n;i++) {
		cout << "Student Information:(using structure array as argument)" << endl;
		cout << "  Name: " << pa[i].fullname << endl;
		cout << "  Hobby: " << pa[i].hobby << endl;
		cout << "  Ooplevel: " << pa[i].ooplevel << endl;
	}
}
*/



//10
