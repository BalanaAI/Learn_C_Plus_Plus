/*********************************************************************
*                       All About Try ... Catch
* 
* We can have multiple catch blocks to handle different type of 
* exceptions.
*
* The catch all block "catch(...)" can handle any type of exception. 
* It should be the last block if we have multiple catch blocks.
* 
* In case of user-defined exception handling, the child class catch 
* block must be written before the parent class catch block.
* 
* Try … catch block can also be nested inside another try ... catch 
* block.
**********************************************************************/
#include <iostream>
#include <string>

using namespace std;

class MyException1 : exception {
    // Userdefined Exception
};

class MyException2 : public MyException1 {
    // User-defined Exception inherited from MyException1 class
};


int main() {
    try {
        // throw 101;
        // throw 10.5;
        // throw 'e';
        // throw string("Unknown Exception");
        throw MyException2();
    }
    // This catch block handle integer exceptions
    catch(int e) {
        cout << "Integer exception handled!" << endl;
    }
    // This catch block handle double exceptions
    catch(double e) {
        cout << "Double exception handled!" << endl;
    }
    // Child class catch block must come first then parent class catch
    catch(MyException2 e) {
        cout << "MyException2 handled!" << endl;
    }
    catch(MyException1 e) {
        cout << "MyException1 handled!" << endl;
    }
    // The catch all block will handle all unspecified exceptions
    // and comes at the end
    catch(...) {
        cout << "Unspecified exception handled!" << endl;
    }

    cout << "Good Bye!" << endl;
    return 0;
}