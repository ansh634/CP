import java.util.*;

public class codeforces {
    public static void main(String[] arg) {
        Scanner scanner = new Scanner(System.in);
        int test = scanner.nextInt();

        for (int index = 0; index < test; index++) {
            int x = scanner.nextInt();
            ArrayList<Integer> arrayList =new ArrayList<>();
            boolean e1=false,e2=false,o1=false,o2=false;

            for(int a =0;a<x;a++)
            {
                int c = scanner.nextInt();
                arrayList.add(c);
                if(a%2 ==0)
                {
                    if(arrayList.get(a)%2==0)
                        e1=true;
                    else
                        o1=true;

                }else
                {
                    if(arrayList.get(a)%2==0)
                        e2=true;
                    else
                        o2=true;
                }
            }
            if(e1 && o1 )
            {
                System.out.println("NO");
            }else if(e2 && o2)
            {
                System.out.println("NO");
            }else
            {
                System.out.println("YES");
            }


        }


    }
}