using namespace std;
int digital_root(int n)
{
  int num;
  num=0;
  while(true){
   if (n/10!=0){
   num+=n%10;
   n=n/10;
  }else if ((n+num)>10){
   n+=num;
   num=0;
  }else if ((n+num)<10) {
  num+=n;
  break;  
  }
}
  return num;
}