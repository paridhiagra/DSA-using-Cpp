class Calculator
{
//    int a;   instance variable - property of the class

   public int add()
   {
        System.out.println("in add");
        return 0;
   }
}
// Object - Properties and Behaviours (know something and do something)
//First create a "Class" 

 public class classobj
    {
        public static void main(String a[])    //static = return type and then method name 
        {
            int x = 4;   //primitve value 
            int y = 5;   //primitve value 

            Calculator calc = new Calculator(); // this is how we create an object of a class
            // calc.add();  // this is how we call a method of a class
            
            int result = calc.add();
            System.out.println(result);
            // int result = x + y; 
            // System.out.println(result);
        }
    }


// class Calculator 
// {
//     public int add(int n1, int n2)
//     {
//         int r = n1 + n2;
//         return r;
//     }
// } 
// public class calculator
// {
//     public static void main(String a[])
//     {
//         int num1 = 4;
//         int num2 = 5;

//         Calculator calc = new Calculator(); 
        
//         int result = calc.add(num1, num2);
//     or  int result = calc.add(4,5);
//         System.out.println(result);  //9
//     }
// }


// JDK = JAVA DEVELOPMENT KIT // JVM = JAVA VIRTUAL MACHINE // JRE = JAVA RUNTIME ENVIRONMENT
// JDK(act as a upper layer) = JRE + Development tools (compiler, debugger, etc.)
// JRE = JVM + Libraries (Java API) + Other files (configuration files, etc.)
// JVM = Java Virtual Machine (runs Java bytecode on the host machine) 