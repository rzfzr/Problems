#include <iostream>
#include <iomanip>

using namespace std;

main(){
    

    float i=0,t=0,xt=0,yt=0,et=0;
    int nw=0,x,y;
start:
    
    cin>>x;
    cin>>y;
    if(x>y)xt++;
    if(x<y)yt++;
    if(x==y)et++;
    t++;
choose:
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>nw;
    if(nw==1){
        goto start;
    }else if(nw==2){
        goto end;
    }else{
        goto choose;
    }
    
end:
cout<<t<<" grenais"<<endl;
cout<<"Inter:"<<xt<<endl;
cout<<"Gremio:"<<yt<<endl;
cout<<"Empates:"<<et<<endl;
if(xt>=yt){
    cout<<"Inter venceu mais"<<endl;
}else{
    cout<<"Gremio venceu mais"<<endl;
}
    
}
