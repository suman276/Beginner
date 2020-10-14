void Bsearch(int a[]; int n, int data)
{
 int lb = 0,ub = n;
int mid;
int pos = -1;
while(lb <= ub)
{
 mid = (ub+lb)/2;
 if(a[mid] == data)
{
  pos = mid;
  cout<<"Element found at index no : ";
  cout<<pos+1;
  break;
}
else if(a[mid] < data)
{
  lb = mid+1;
}
else
  ub = mid-1;
}
}