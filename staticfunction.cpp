#include <iostream>
#include <string> //menyertakan library string
using namespace std;

class Mahasiswa{

    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void printAll();

        //pembuatan static function
        static void setNIm(int pnim){
            nim = pnim;
        };

        static int getNIm(){
            return nim;
        }

        Mahasiswa(string pnama) :nama(pnama){
            setID();
        };
};

