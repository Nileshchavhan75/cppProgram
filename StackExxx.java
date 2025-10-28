import java.util.*;
class StackExxx{
public static void main(String args[]){
Stack s = new Stack();
s.push("A");
s.push("B");
s.push("c");

System.out.println(s);
System.out.println(s.search("c"));
s.pop();
System.out.println(s);
s.remove("B");
System.out.println(s);
System.out.println(s.search("z"));


}
}