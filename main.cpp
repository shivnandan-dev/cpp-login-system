#include <iostream>
#include <string>
using namespace std;
int main () {
  string signupusername;
  string signuppassword;
  string loginusername;
  string loginpassword;
  int attempts = 2;

  cout<< "====SIGNUP===="<<endl;
  cout<<"Create username"<<endl;
  getline (cin,signupusername );

  cout<<"CREATE A STRONG PASSWORD!"<<endl;
  getline ( cin, signuppassword );
  
  cout<<"*****************************************"<<endl;
  cout<<"signup succesfully , now you can login!"<<endl;
  cout<<"*****************************************"<<endl;

  cout<<"LOGIN"<<endl;
  while (attempts > 0 ){
     cout<<"ATTEMPT LEFT: "<<attempts<<endl;
     cout<<"ENTER USER NAME"<<endl;
     getline( cin, loginusername);
     cout<<"ENTER PASSWORD!"<<endl;
     getline (cin, loginpassword);

    if (loginusername == signupusername && loginpassword == signuppassword) {
      cout<<"*******"<<endl;
      cout<<"*LOGIN SUCCESSFUL!"<<endl;
      cout<<"*******"<<endl;
      break;
    } else {
      cout<<"Incorrect username or password!"<<endl;
        attempts--;
    }
    
  }
  if (attempts==0){
    cout<<"######################"<<endl;
    cout<<"ACCESS DENIED! TOO MANY ATTEMPTS!"<<endl;
    cout<<"######################"<<endl;
  }
  return 0;
}
