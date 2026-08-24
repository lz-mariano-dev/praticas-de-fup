#include <stdio.h>

int main(){
    long int hd, md, sd, td;
    long int ha, ma, sa, ta;
    int th = 0, tm =0, ts = 0;
    scanf("%ld %ld %ld", &hd, &md, &sd);
    scanf("%ld %ld %ld", &ha, &ma, &sa);
    td = (hd * 3600) + (md * 60) + sd;
    ta = (ha * 3600) + (ma * 60) + sa;
    if(td > ta){
        td = 86400 - td;
        ts = td + ta;
    }else{
        ts = ta - td;
    }
    th = ts/3600;
    ts = ts % 3600; 
    if(ts > 0){
        tm = ts/60;
        ts = ts % 60;
    }
    printf("%d %d %d", th, tm, ts);

}