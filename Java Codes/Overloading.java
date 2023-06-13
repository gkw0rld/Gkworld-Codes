class A
{
    public void f1(int x)
    {
        System.out.println("class A");
    }
}
class B extends A
{
    public void f1(int x, int y)
    {
        System.out.println("Class B");
    }
}
public class Overloading
{
    public static void main(String args[])
    {
        B obj=new B();
        obj.f1(1);        
        obj.f1(4,2);        

        
    }
}