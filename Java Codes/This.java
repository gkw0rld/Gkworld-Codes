class Box
{
    private int l, b, h;
    public void setDimension(int l, int b, int h)
    {
        this.l=l; this.b=b; this.h=h;
    }
}
public class This 
{
    public static void main(String args[])
    {
        Box b1= new Box();
        b1.setDimension(12,23,45);
    }
}     
