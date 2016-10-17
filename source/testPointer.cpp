/*
TestPointers
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial illustrates the way for print out value of pointers
*	and their "pointees" via function printf and cout
*	It also covers the concept of specifier character in pintf function.
*/

#include <iostream>
using namespace std;

int main() {

    int *p1;
    int* p2;
    int i = 10;
    p1 = &i;
    p2 = &i;

    // http://www.cplusplus.com/reference/cstdio/printf/

    printf("%s%i\n","i:    ",i);
    printf("%s%i\n","*p1:  ",*p1);
    printf("%s%i\n","*p2:  ",*p2);

    cout << endl;

    printf("%s%i\n","&i:   ",&i);
    printf("%s%p\n","p1:   ",p1); // prints in hexadecimal
    printf("%s%i\n","p2:   ",p2);

    // for printing pointer addresses via cout
    // see http://stackoverflow.com/questions/5657123/how-to-simulate-printfs-p-format-when-using-stdcout

    cout << endl;
    cout << "Testing cout: " << static_cast<void*>(p1) << endl;

    // in case you don't have Ctrl-F5 set:
    // getchar();
}
