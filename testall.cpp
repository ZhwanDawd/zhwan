/*#include <iostream>
using namespace std;



int main()
{
    // an array with 5 rows and 2 columns.
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };

    // output each array element's value                      
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++) {

            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j] << endl;
        }

    return 0;
}


/ Write a program to do
//1 / read 2D size 3 and 4
//2 / print array matrix
//3 / write function to return location using row wise method
#include <iostream>
using namespace std;
void location(int i, int j, int c, int ba);
int main() {
	short a[3][4];
	cout << "Enter your numbers of your matrix" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> a[i][j];
	cout << "your matrix is" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "a[" << i << "][" << j << "]: ";
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	int i = 0, j = 0;
	cout << "Enter the i num" << endl;
	cin >> i;
	cout << "Enter the j num" << endl;
	cin >> j;
	location(i, j, 4, 400);
	return 0;
}
void location(int i, int j, int c, int ba) {
	cout << "location" << endl;
	cout << (ba + ((i * c) + j) * 2);
}


#include <iostream>
using namespace std;
int location();
int main()
{
    cout << "Enter the numbers of your matrix" << endl;
    short a[3][3];
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
            if (i == j)
                sum += a[i][j];

        cout << sum<<endl ;
        
    }
    cout << location() << endl;

}
int location() {
    int i, j;
    cout << "Enter the i num" << endl;
    cin >> i;
    cout << "Enter the j num" << endl;
    cin >> j;
    return 400 + ((i * 3) + j) * 2;
}

#include <iostream>
using namespace std;

struct Point {
    int x = 0; // It is Considered as Default Arguments and no Error is Raised
    int y = 1;
};

int main()
{
    struct Point p1;

    // Accessing members of point p1
    // No value is Initialized then the default value is considered. ie x=0 and y=1;
    cout << "x = " << p1.x << ", y = " << p1.y << endl;

    // Initializing the value of y = 20;
    p1.y = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;
    return 0;
}
*/
/*Create an array of 3 students from the student structure
And assign values to each student from the user
Then compare two of them
*/
#include <iostream>
using namespace std;
struct student
{
    string name;
    int age;
};

bool check(student arr[3]) {
    if (arr[0].name == arr[1].name && arr[0].age == arr[1].age) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    student arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "enter the student name :" << endl;
        cin >> arr[i].name;
        cout << "enter the student age :" << endl;
        cin >> arr[i].age;

    }
    cout << check(arr) << endl;
}