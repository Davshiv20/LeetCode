class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer, Integer>map=new HashMap<Integer,Integer>();
        int n=nums.length;
        for(int num:nums)
        {
            map.put(num,map.getOrDefault(num,0)+1);
        }
        
        for(Map.Entry<Integer,Integer> m:map.entrySet())
        {
            int k=m.getValue();
            if(k>1)
            {
                return m.getKey();
            }
        }
        return -1;
    }
}