#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
  cout<<"Pattern 1: \n";
  /*  n=3
      ***
      ***
      ***
*/
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"*"<<" ";
    } cout<<endl;


    cout<<"Pattern 2: \n";
  /*  n=3
      * 
      * *
      * * *
*/
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*"<<" ";
    } cout<<endl;
}

    
    cout<<"Pattern 3: \n";
  /*  n=3
      1
      1 2 
      1 2 3
*/
    for(int i=0;i<n;i++){
		for(int j=1;j<=i+1;j++){
			cout<<j<<" ";
		}cout<<endl;
	}

    
    cout<<"Pattern 4: \n";
  /*  n=3
      1 
      2 2 
      3 3 3
*/
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<i+1<<" ";
		}cout<<endl;
	}

    
    cout<<"Pattern 5: \n";
  /*  n=3
      * * *
      * *
      *
*/
    for(int i=1;i<=n;i++){// here we are using value of i so i start from 1
		for(int j=0;j<n-i+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}

    
    cout<<"Pattern 6: \n";
  /*  n=3
      1 2 3
      1 2
      1
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" "; 
        }cout<<endl;
    }


    
    cout<<"Pattern 7: \n";
  /*  n=3
       *
      ***
     *****
*/
    for(int i=0;i<n;i++){
        //space
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
       // star
       for(int j=0;j<2*i+1;j++){
           cout<<"*";
       }
        //space
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
       cout<<endl;
    }

    
    cout<<"Pattern 8: \n";
  /*  n=3
      *****
       ***
        *
*/

    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j< 2*n -(2*i +1);j++){
            
            cout<<"*";
        }
        //space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    
    cout<<"Pattern 9: \n";
  /*  n=3
        *
       ***
      *****
      *****
       ***
        *  
        combination of patteren 7&8
*/

    for(int i=0;i<n;i++){
        //space
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
       // star
       for(int j=0;j<2*i+1;j++){
           cout<<"*";
       }
        //space
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
       cout<<endl;
    }
     for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j< 2*n -(2*i +1);j++){
            
            cout<<"*";
        }
        //space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }


    
    cout<<"Pattern 10: \n";
  /*  n=5
       *      
      **     
     ***    
    ****   
   ***** 
*/
    for(int i=0;i<n;i++){
    //space
    for(int j=1;j<=n-i+1;j++){
        cout<<" ";
    }
    //star
    for(int j=1;j<=i+1;j++){
        cout<<"*";
    }
    //space
    for(int j=1;j<=n-i+1;j++){
        cout<<" ";
    }
    cout<<endl;
}



    
  }
    


  
