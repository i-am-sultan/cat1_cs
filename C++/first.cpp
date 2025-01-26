#include <iostream>
#include <fstream>
using namespace std;
void file_mng(){
    fstream file("C:\\Users\\offic\\Documents\\VS Code\\Codes\\C Programming\\test.txt",ios::in |ios::out| ios::app);
    if (file.is_open()){
        cout << "File is opened properly.";
        file << "This is file content.";
        file.close();
    }else{
        cout << "File not opened.";
    }
}
int main(){
    file_mng();
    return 0;
}