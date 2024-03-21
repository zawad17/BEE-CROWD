#include <stdio.h>

int main() {
int sd,fd,st,ft,sh,sm,ss,fh,fm,fs,d,o1,o2,o3,o4;
scanf("%d",&sd);
scanf("%d",&fd);
scanf("%d",&sh);
scanf("%d",&sm);
scanf("%d",&ss);
scanf("%d",&fh);
scanf("%d",&fm);
scanf("%d",&fs);
st=(sh*3600)+(sm*60)+ss;
ft=(fh*3600)+(fm*60)+fs;
d=ft-st;
o1=d/(24*3600);
o2=(o1%(24*3600));


return 0;
}
