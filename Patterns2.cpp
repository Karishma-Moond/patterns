#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
cout<<"Pattern 11: \n";
  /*  n=5
     *****
      **** 
       ***  
        **   
         * 
*/
  for(int i=0;i<n;i++){
    //space
    for(int j=1;j<=i;j++){
        cout<<" ";
    }
    //star
    for(int j=1;j<=n-i;j++){
        cout<<"*";
    }
    //space
    for(int j=1;j<=i;j++){
        cout<<" ";
    }
    cout<<endl;
}


  
    cout<<"Pattern 12: \n";
  /*  n=3
*
**
***
**
*
*/
   for(int i=1;i<=2*n-1;i++){
        int star=i;
        if (i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
	}

  
    cout<<"Pattern 13: \n";
  /*  n=4
1
0 1
1 0 1
0 1 0 1
*/
   int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }else {
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }


  
    cout<<"Pattern 14: \n";
  /*  n=3
      ***
      ***
      ***
*/
    cout<<"Pattern 15: \n";
  /*  n=3
      ***
      ***
      ***
*/
    cout<<"Pattern 16: \n";
  /*  n=3
      ***
      ***
      ***
*/
    cout<<"Pattern 17: \n";
  /*  n=3
      ***
      ***
      ***
*/
    cout<<"Pattern 18: \n";
  /*  n=3
      ***
      ***
      ***
*/
    cout<<"Pattern 19: \n";
  /*  n=3
      ***
      ***
      ***
*/
    cout<<"Pattern 20: \n";
  /*  n=3
      ***
      ***
      ***
*/
}
