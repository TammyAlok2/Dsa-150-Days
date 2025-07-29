class Solution {
    public int mostFrequentEven(int[] nums) {
        int n = nums.length;
        int count =0;
        int freq =0;
        int result =-1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i =0;i<n;i++){
            if(nums[i]%2!=0){
                continue;
            }
            if(map.containsKey(nums[i])){
                map.put(nums[i], map.get(nums[i])+1);
            }
            else{
                map.put(nums[i],1);
            }
        }
        for(int num:map.keySet()){
            count = map.get(num);
            if(count>freq || (count ==freq && num <result)){
                freq = count;
                result = num;
            }
        }
        return result;
    }
}
