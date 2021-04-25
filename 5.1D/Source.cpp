#include "Vector3D.h"
#include "Vector.h"
#include<iostream>
#include <string>
#include <sstream>

#include "Exception.h"
using namespace std;



	
        int main()
        {
            Vector3D A;
          
            try
            {
                cin >> A;
              
            }
            catch (invalid_argument e)
            {
                cout << e.what() << endl;
            }
            catch (bad_exception e)
            {
                cout << e.what() << endl;
            }
            catch (Exception& e)
            {
                cout << e.what() << endl;
            }
            catch (const char* e)
            {
                cerr << e << endl;
            }
	

	cout << "A = " << A;
	cout << ++A;
	cout << --A;
	A++;
	cout << A;
	A--;
	cout << A;
	A.Distance();
	A.scalar();
	A.isEqual();
	A.isEqual2();

	return 0;
}
