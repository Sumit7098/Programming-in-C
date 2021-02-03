#define LEN(S) strlen(S) // this will cause errors if we put something other than strings in LEN

#define DPRINT(expr) printf(#expr " = %g\n", expr)

int main()
{
    int x = 6, y = 3;
    DPRINT(x/y);// will be expanded to
    //printf("x/y" " = %g\n", x/y);
}