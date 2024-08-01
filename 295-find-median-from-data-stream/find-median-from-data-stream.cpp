class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int>>minH;
    priority_queue<int>maxH;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxH.empty() || num<=maxH.top())
        {
            maxH.push(num);
        }
        else{
            minH.push(num);
        }
        if(maxH.size()>minH.size()+1)
        {
            minH.push(maxH.top());
            maxH.pop();
        }        
        else if(maxH.size()<minH.size())
        {
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    double findMedian() {
        
        double res=0;
        if(maxH.size()==minH.size())
        {
            res=(double(maxH.top())+double(minH.top()))/2.0;
        }
        else{
            res=maxH.top();
        }
        return res;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */