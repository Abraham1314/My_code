public class hello
{
    public static void main(String args[]){
        System.out.println("Hello world");
		System.out.println("Nice to meet you");
		Student stu = new Student() ;
		System.out.println("We are student");
    }
}
class Student
{
	public void speak(String s)
	{
		System.out.println(s);
	}
}