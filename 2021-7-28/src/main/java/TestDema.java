import java.util.*;
public class TestDema {
    public static void main(String[] args) {
        
    }

}
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int num = scan.nextInt();
//
//        for (int i = 0; i <= num; i++){
//            int tmp = i;
//            int count = 0;
//            while(tmp != 0){
//                count++;//3
//                tmp = tmp/10;//0
//            }
//
//            tmp = i;
//            int sum = 0;
//            while( tmp != 0  ){
//                sum += Math.pow(tmp%10 ,count);
//                tmp =tmp/10;
//            }
//            if(sum ==i) {
//                System.out.println(i);
//            }
//        }
//    }
//}
//    public static void main(String[] args) {
//        int count = 0;
//        for (int i = 1;i <= 100;i++){
//            if(i / 10 ==9){
//                count++;
//            }
//            if(i % 10 == 9){
//                count++;
//            }
//        }
//        System.out.println(count);
//    }
//}

//    public static void main(String[] args) {
//          double sum = 0.0;
//          int flg = 1;
//          for (int i = 1;i <= 100;i++){
//              sum += 1.0/i * flg;
//              flg = - flg;
//          }
//          System.out.println(sum);
//    }
//}




//    public static void main(String[] args) {
//        int a = 24;
//        int b = 18;
//        int c = a%b;
//        while(c != 0){
//            a = b;
//            b = c;
//            c = a%b;
//        }
//        System.out.println(b);
//    }
//
//}
//    public static void main(String[] args) {
//          for(int i = 1; i <= 9;i++){
//              for(int j = 1;j <= i;j++){
//                  System.out.print(i+"*"+j+"="+i*j+" ");
//              }
//              System.out.println();
//          }
//    }
//
//
//}
//        for(int i=100;i<=2021;i++){
//            if(i%4==0 && i%100!=0 || i%400==0){
//                System.out.println(i);
//            }
//        }
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//       int num = scan.nextInt();
//       int i = 2;
//       for(;i <= num/2;i++){
//           if(num % i ==0){
//               System.out.println("num不是素数");
//               break;
//           }
//        }
//           if(i >=num/2){
//               System.out.println("num是素数");
//           }
//
//    }
//    public static void main(String[] args) {
//        int num = 1;
//        int sum = 0;
//        while (num <= 10) {
//              int ret = 1;
//              int i = 1;
//              while(i <= num){
//                  ret *=i;
//                  i++;
//              }
//              sum += ret;
//              num++;
//        }
//        System.out.println(sum);
//    }
//}
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int num = scan.nextInt();
//        int i = 1;
//        int odd = 0;
//        while (i <= num) {
//            odd += i;
//            i += 2;
//        }
//        System.out.println("奇数的和是：" + odd);
//
//        i = 2;
//        int eve = 0;
//        while (i <= num) {
//            eve += i;
//            i += 2;
//        }
//        System.out.println("偶数的和是：" + eve);
//        i = 1;
//        int ret = 0;
//        while (i <= num) {
//            ret += i;
//            i += 1;
//        }
//        System.out.println("和是：" + ret);
//    }
//}

//    public static void main(String[] args) {
//         Scanner scan = new Scanner(System.in);
//        int a = scan.nextInt();
//        //int a = 10;
//        switch (a) {
//            case 1:
//                System.out.println("1");
//                break;
//            case 2:
//                System.out.println("2");
//                break;
//            default:
//                System.out.println("不是1也不是2");
//                break;
//
//        }
//    }
//}




//    public static void main2 (String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int year = scan.nextInt();
//        if (year%4==0 && year%100!=0 || year%400==0){
//
//            System.out.println("闰年：" );
//        }
//           else{System.out.println("不是闰年：" );
//
//        }
//    }
//
//
//    public static void main1(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int num = scan.nextInt();
//        int i = 1;
//        int odd = 0;
//        while (i <= num) {
//            odd += i;
//            i += 2;
//        }
//        System.out.println("奇数的和是：" + odd);
//
//        i = 2;
//        int eve = 0;
//        while (i <= num) {
//            eve += i;
//            i += 2;
//        }
//        System.out.println("偶数的和是：" + eve);
//        i = 2;
//        int ret = 0;
//        while (i <= num) {
//            ret += i;
//            i += 1;
//        }
//        System.out.println("和是：" + ret);
//    }
//}
