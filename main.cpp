#include <iostream>

using namespace std;

int main() {
    int m;
    bool flag;

    cin>>m>>flag;
    int brojacnabroevi=0;

    if(flag==true) {
        while(brojacnabroevi<=10) {
            for(int i=m; ; i++) {
                int temp=i;
                int tempx=i;
                int brojacnacifriparni=0;
                int brojacnacifri=0;
                while(tempx>0) {
                    tempx/=10;
                    brojacnacifri++;
                }
                while(temp>0) {
                    int poslednacifra=temp%10;
                    if(poslednacifra%2==0) {
                        brojacnacifriparni++;
                    }
                    else {
                        break;
                    }
                    temp/=10;
                }
                if(brojacnacifriparni==brojacnacifri) {
                    cout<<i<<endl;
                    brojacnabroevi++;
                }
                if(brojacnabroevi==10) {
                    break;
                }

            }
        }
    }
    else if(flag == false) {
        while(brojacnabroevi<=10) {
            for(int i=m; ; i++) {
                int temp=i;
                int tempx=i;
                int brojacnacifrineparni=0;
                int brojacnacifri=0;
                while(tempx>0) {
                    tempx/=10;
                    brojacnacifri++;
                }
                while(temp>0) {
                    int poslednacifra=temp%10;
                    if(poslednacifra%2==1) {
                        brojacnacifrineparni++;
                    }
                    else {
                        break;
                    }
                    temp/=10;
                }
                if(brojacnacifrineparni==brojacnacifri) {
                    cout<<i<<endl;
                    brojacnabroevi++;
                }
                if(brojacnabroevi==10) {
                    break;
                }


            }

        }
    
    }
}
