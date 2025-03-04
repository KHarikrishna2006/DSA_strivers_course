public class TwoSum{
    public void twoSum(int[] nums, int target) {
         
        int a[]=new int[2];
        
      
        for(int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){
                  if(nums[i]+nums[j]==target){
                a[0]=i;
                a[1]=j;
               
            }
            }
        }
        for(int i:a){
        System.out.println(i);
        }
    }
    public static void main(String[]args){
      
       int nums[]={1,2,6,7,4,6,3,9,8,6};
        int p=17;
        TwoSum ob=new TwoSum();
        ob.twoSum(nums, p);

    }
}