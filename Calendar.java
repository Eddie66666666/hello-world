package hello;

import java.util.Scanner;

public class Calendar {
    static String a="a";
    static String b="b";
//    System.out.println("欢迎使用刘君的小程序,"
//    		+ "输入a进入输入年份输出该年日历。"
//    		+ "输入b进入输入日期，输出该天星期");
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
        if(args[0].equals(a))
        {
//        	System.out.println("好把这个功能我还没开发好");
        	System.out.println("请输入你要打印的年份：");
        	Scanner sc=new Scanner(System.in);
            int year=sc.nextInt();
        	OutputCalendar(year);
        }
        else if(args[0].equals(b))
        {
        	Countday();
        }
	}
    public static void OutputCalendar(int year)
    {
    	int tip=1;
    	int countday=0;
    	int[] Mouth1= {31,28,31,30,31,30,31,31,30,31,30,31};//月份天数做好准备
		int[] Mouth2= {31,29,31,30,31,30,31,31,30,31,30,31};//闰年的月份
		for(int o=1900;o<year;o++)
		{
			if(IsleapYear(o)==1)
			{
				countday+=366;
			}
			else
			{
				countday+=365;
			}
		}
		countday%=7;
		tip+=countday;
//		System.out.println(tip);
  
    	int z=0;
    	int q=0;
//        System.out.println("一"+' '+'二'+' '+'三'+' '+'四'+' '+'五'+' '+'六'+' '+'日');
	    do
	    { 
	    	switch(q)
	    	{
	    	case 0:
	    		System.out.println();
	    		System.out.println("January");
	    		break;
	    	case 1:
	    		System.out.println();
	    		System.out.println("Febuary");
	    		break;
	    	case 2:
	    		System.out.println();
	    		System.out.println("March");
	    		break;
	    	case 3:
	    		System.out.println();
	    		System.out.println("April");
	    		break;
	    	case 4:
	    		System.out.println();
	    		System.out.println("May");
	    		break;
	    	case 5:
	    		System.out.println();
	    		System.out.println("June");
	    		break;
	    	case 6:
	    		System.out.println();
	    		System.out.println("July");
	    		break;
	    	case 7:
	    		System.out.println();
	    		System.out.println("August");
	    		break;
	    	case 8:
	    		System.out.println();
	    		System.out.println("Sepetember");
	    		break;
	    	case 9:
	    		System.out.println();
	    		System.out.println("October");
	    		break;
	    	case 10:
	    		System.out.println();
	    		System.out.println("November");
	    		break;
	    	case 11:
	    		System.out.println();
	    		System.out.println("December");
	    		break;
	    		
	    	}
	    	System.out.println("一"+' '+'二'+' '+'三'+' '+'四'+' '+'五'+' '+'六'+' '+'日');
	    	for(int i=1;i<tip;i++)
	        {
	            System.out.print("   ");
	        }
	    	if(IsleapYear(year)==0)
	    	{
	    		for(int k=1;k<=Mouth1[q];k++)
	    		{
	    			System.out.printf("%2d",k);
	    			System.out.print(" ");
	    			tip++;
	    			if(tip==8)
	    			{
	    				System.out.println();
	    				tip=1;
	    			}
	    		}
	    	}
	    	else
	    	{
	    		for(int k=1;k<=Mouth2[q];k++)
	    		{
	    			System.out.printf("%2d",k);
	    			System.out.print(" ");
	    			tip++;
	    			if(tip==8)
	    			{
	    				System.out.println();
	    				tip=1;
	    			}
	    		}
	    	}
	    	q++;
	    }while(q<12);
    }
	public static int IsleapYear(int a)//判断年份是否是闰年
	{
		int t=0;
		if(a%400==0||(a%4==0&&a%100!=0))
		{
			t=1;
		}
		return t;
	}
	
	public static int Countday(){
		Scanner in=new Scanner(System.in);
		System.out.println("请输入年份：");
		int year=in.nextInt();
		System.out.println("请输入月份");
		int mouth=in.nextInt();
		System.out.println("请输入日数");
		int day=in.nextInt();
		int allday=0;//记录年份相隔的天数
		int[] Mouth1= {31,28,31,30,31,30,31,31,30,31,30,31};//月份天数做好准备
		int[] Mouth2= {31,29,31,30,31,30,31,31,30,31,30,31};//闰年的月份
		int doyear=year;
		do {
			if(IsleapYear(doyear)==1)
			{
				allday+=366;
			}
			else
			{
				allday+=365;
			}
			doyear--;
		}while(doyear>1900);
		if(IsleapYear(year)==1)
		{
			for(int z=0;z<mouth-1;z++)
			{
				allday+=Mouth2[z];
			}
		}
		else
		{
			for(int z=0;z<mouth-1;z++)
			{
				allday+=Mouth1[z];
			}
		}
		allday+=day;
		allday%=7;
        System.out.println(year+"这一年的"+mouth+"月"+day+"号是星期"+(allday));
        in.close();
        return allday;
	}
    
	}
