class People
{
	int height ;
	String ear ;
	void speak(String s){
		System.out.println(s);
	}
}

class A
{
	public static void main(String args[])
	{
		People zhubajie ;
		zhubajie = new People() ;
		zhubajie.height = 170 ;
		zhubajie.ear    = "��ֻ�����" ;
		System.out.println("��ߣ�"+zhubajie.height);
		System.out.println(zhubajie.ear);
		System.out.println("ʦ�����Ǳ�ȥ�����ˣ�ȥ�¹��ɡ�");
	}
}