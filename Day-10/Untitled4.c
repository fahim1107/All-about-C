/*
a > b & a > c ===== A is big


*/
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        if(b>=c){
            printf("%d");
        }else{
            printf("%d");
        }
    }else if(b>=c && b>=a){
        if(a>=c){
            printf("%d");
        }else{
            printf("%d");
        }
    }else if(c>=a && c>=b){
        if(b>=a){
            printf("%d");
        }else{
            printf("%d");
        }
    }
    return 0;
}
