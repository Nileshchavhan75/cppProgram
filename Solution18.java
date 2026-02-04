class Solution18 {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> list = new ArrayList<>();

        for(int i = 0; i<nums.length; i++){
            int ind =  Math.abs(nums[i]) - 1;

            if(nums[ind] < 0){
                list.add(ind + 1);
            }else{
                nums[ind] = -nums[ind];
            }
        }
        return list;
    }
}