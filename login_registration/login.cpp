#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsLoggedIn(){
  string username, password, un, pw;
  cout << "Enter username: ";
  cin >> username;
  cout <<"Enter password: ";
  cin >> password;

  ifstream read("d:\\" + username + ".txt");
  getline(read, un);
  getline(read, pw);

  if(un == username && pw == password){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int choice;
  cout << "1.Register\n2.Login\n";
  cin >> choice;
  if(choice == 1){
    string username, password;
    cout << "Enter any username: ";
    cin >> username;
    cout << "Enter a passsword: ";
    cin >> password;
    ofstream file;
    file.open("d:\\" + username + ".txt");
    file << username << endl << password;
    file.close();
    main();
  }
  else if(choice == 2){
      bool status = IsLoggedIn();

      if(!status){
        cout << "Wrong login" << endl;
        system("PAUSE");
      }
      else{
        cout << "SUCCESS";
        system("PAUSE");
      }
    }
}
