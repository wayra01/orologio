#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
    cout << "Programma orologio di Guaira Jaramillo Nitoglia" << endl;
    cout<<"#######################"<<endl;
    cout<<"#####   ### ###   #####"<<endl;
    cout<<"##### ## ## ## ## #####"<<endl;
    cout<<"##### ### # # ### #####"<<endl;
    cout<<"##### ####   #### #####"<<endl;
    cout<<"##### ####   #### #####"<<endl;
    cout<<"#####0### # # ###0#####"<<endl;
    cout<<"######## ## ## ########"<<endl;
    cout<<"#######################"<<endl;
    usleep(5000000);
    system("clear");
    for(int h=0; h<24; h++){
        for(int m=0; m<60; m++){
            for(int s=0; s<60; s++){
                    cout<<h<<":"<<m<<":"<<s<<endl;
                    usleep(1000000);
                    system("clear");
            }
        }
    }
    main();
}
