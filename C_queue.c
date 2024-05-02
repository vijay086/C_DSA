#include<stdio.h> 
# define n 5 
int Q[n]; 
int f = -1; 
int r = -1; 
void insert(int x) 
{ 
if((f == 0 && r == n-1) || (f == r+1)) 
{ 
printf("Queue Overflow n"); 
return; 
} 
if(r == n-1) 
r = 0; 
else 
r = r+1; 
Q[r] = x ; 
printf("inserted element: %d\n",x); 
if(f == -1) 
{ 
f = 0; 
} 
} 
void deletion() 
{ 
if(f == -1) 
{ 
printf("Queue Underflown"); 
return ; 
} 
printf("Element deleted from queue is : %d\n",Q[f]); 
if(f == r) 
{ 
f = -1; 
r=-1; 
} 
else if(f == n-1) 
{ 
f = 0; 
} 
else 
{ 
f = f+1; 
} 
} 
void main() 
{ 
} 
insert(10); 
insert(20); 
insert(30); 
deletion(); 
insert(40); 
insert(50); 
insert(10);
