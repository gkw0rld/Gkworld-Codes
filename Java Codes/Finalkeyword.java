class dummy
{
    public final void somefunction() // this is overriding
    {}
}
class moredummy extends dummy
{
    public void somefunction() //overriding is not possble due to final keyword in the superclass function
    {}
}
public class Finalkeyword 
{
    private final int x/*=2 is a way to initialize x*/; //final instance member variable
    //{x=2;} is a way to initialize x
    Finalkeyword () //Constructor is also a way to initialize x
    {x=2;}
    private final static int y/*=4 */; //final static member variable
    static {y=4;} //is a way to initialize y by static block
    public void fun()
    {
        final int k;// final local variable

    }
    public static void main(String args[])
  {
    Finalkeyword f1=new Finalkeyword();
  }  
}
