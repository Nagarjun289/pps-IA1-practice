struct _complex
{
 float real,imaginary;
};

typedef _complex Complex;

int get_n();

{
  int x;
  printf("enter the number of values to be added\n");
  scanf("%d",&n);
  return n;
}

void input_n_complex(int n, Complex c[n])
{
  printf("ente");
  for(int i= 0; i < n; i++)
  {
    scanf("%f%f",&a[i].real,&c[i].imaginary)
  }
}
Complex add_n_complex(int n, Complex c[n])
{
  complex result;
  result.real
  for(int i=0; i<n; i++)
  {
    result.real = result.real + c[i],real
  }

}

void output(int n, Complex c[n], Complex result)
{
  {
    printf("%f%f",&a[i].real,&c[i].imaginary)
  }

  printf("result id %f + %fi");


}
int main()
{
  int n;
  complex c[20];
  n=get_n();
  input_n_complex(n , c);

  add_n_complex(n , c);

  output(n, c, result);

}
{
  int i;
  for(i=0; i<n-1;i++)
  printf("%.0f + %.0fi +",c[i].real,c[i].imginary);
  printf("%.0f + %.0fi",c[i].imaginary)
  printf(" is %.0f + %.0fi\n",result,real,result,imaginary);
}


int main()
{
complex h[15];
int x;
x=get_n();
input_n_complex(x,h);
output(x,h,add_n_complex(x,h));
return 0;
}