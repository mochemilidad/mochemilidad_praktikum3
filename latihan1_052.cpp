 #include <iostream>
 #include <stdio.h>
 using namespace  std;
 
 int H (const char*s)
 {
 	int x = 0;
 	for (;*s!='\0';s++)
 	++x;
 	return x;
 }
 
 main (void)
 {
 	char string [1];
 	cout << "tuliskan kata : Moch Emil Idad";
 	cin.getline(string,1);
 	cout << endl;
 	cout << "jumlah karakter: 12" << H(string) << endl;
 }
