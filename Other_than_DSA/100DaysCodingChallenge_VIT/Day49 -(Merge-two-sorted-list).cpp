/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    
    
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
    ListNode li = null;
        ListNode temp = li;
        int size = 0;
 
         ArrayList<Integer> arr = new ArrayList<Integer>();
        ListNode temp1, temp2;
        temp1 = list1;
        temp2 = list2;
        
        while(temp1!=null){
            arr.add(temp1.val);
            temp1 = temp1.next;
        }
        while(temp2!=null){
            arr.add(temp2.val);
            temp2 = temp2.next;
        }
     Collections.sort(arr);  
        
     	for(int i=0; i<arr.size(); i++){
            int element = arr.get(i);
   ListNode n = new ListNode(element);
            if(size==0){
                  temp  = n;
        li = n;  
            }else{
                temp.next = n;
                temp = n;  
            }
            size++;
    }
       
        return li;
    }
}