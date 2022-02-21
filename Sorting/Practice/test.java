class test{
    public static void main(String [] args)
    {
        B b1 =new B();
    }
    }


class A
{
    A(int a){
        
    System.out.print("one");}
    A(int a,int b){

    System.out.print("two");
    }
}
class B extends A
{
    B()
    {
        super(5);
      //  super(5,10);
        System.out.print("sub");
    }
}
