/*Define a class box with length, breadth and height as member variables. Also
define setDimension() and showDimension() as member functions*/
class Box
{
   private int length, breadth, height;
   public void setDimension(int l, int b,int h)
 {
    length=l;
    breadth=b;
    height=h;
 }
 public void showDimension(){
    System.out.println("L="+length);
    System.out.println("B="+breadth);
    System.out.println("H="+height);   
 }
}
public class Example{
    public static void main(String args[]){
        Box smallBox=new Box();
        smallBox.setDimension(12,56,78);
        smallBox.showDimension();

    }
 }

