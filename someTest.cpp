# include <bits/stdc++.h>
//# include <vector>
using namespace std;
//
// t1
//const int N=5010;
//int a[N];
//
//int print(int a[],int n, int k){
//    for (int i=0;i<n;i++){
//        cout
//    }
//}
//int main(){
//  int n,k;
//  scanf("%d %d",&n, &k);
//  for (int i=0;i<n;i++) cin>>a[i];
//  cout<<print(a,n,k)<<endl;
//};

// t1
//int main(){
//    int i,j,k;
//    int m,n;
//    scanf("%d %d",&n, &k);
//
//    scanf("%d", &m);
//    if (k!=1)
//        printf("%d ", m);
//    for (i=2;i<=n;i++)
//    {
//        scanf("%d", &m);
//        if (i!=k)
//            printf("%d ",m);
//    }
//    return 0;
//}


// t5
//const int N=5010;
//int a[N];
//
//int solve(int l, int r){
//    if (l>r) return 0;
//    int k=l;
//    for (int i=l;i<=r;i++)
//        if (a[i]<a[k]) k=i;
//    int sum = a[k];
//    for (int i=l; i<=r;i++)
//        a[i] -= sum;
//    return min(r-l+1,solve(l,k-1)+solve(k+1,r)+sum);
//}
//
//
//int main(){
//    int n;
//    cin>>n;
//    for (int i=0;i<n;i++) cin>>a[i];
//    cout<<solve(0, n-1)<<endl;
//    return 0;
//}


// t4
//int f[505][505];
//char s[505];
//
//bool is_huiwen(int l, int r){
//    while (l<=r)
//    {
//        if (s[l]!=s[r])
//            break;
//        l++;
//        r--;
//    }
//    if (l>=r)
//        return true;
//    else
//        return false;
//}
//
//int main()
//{
//    int i,j,k;
//    int m,n,l,r;
//    memset(s,0,sizeof(s));
//    scanf("%s", s);
//    n=strlen(s);
//    for (i=0;i<=n;i++)
//    {
//        for (j=0;j<=n;j++)
//            f[i][j]=j-i+1;
//        f[i][j]=1;
//    }
//    for (i=0;i<n;i++)
//        for (j=i+1;j<n;j++)
//            if (is_huiwen(i,j))
//                f[i][j]=1;
//    for (i=0;i<n;i++)
//        for (j=i+1;j<n;j++)
//        {
//            for (k=i;k<j;k++)
//                if (f[i][k]+f[k+1][j]<f[i][j])
//                    f[i][j] = f[i][k]+f[k+1][j];
//        }
//
//    scanf("%d", &n);
//    for (i=0;i<n;i++)
//    {
//        scanf("%d %d", &l,&r);
//        l--;
//        r--;
//        if (l<=r)
//            printf("%d\n", f[l][r]);
//        else
//            printf("%d\n", f[r][l]);
//    }
//    return 0;
//}


// t3
//int sumN(int n){
//    int res=0;
//    while (n>0){
//        res += n%10;
//        n=n/10;
//    }
//    return res;
//}
//
//int main(){
//    int t;
//    cin>>t;
////    while (t--){
////        long long num;
////        cin>>num;
////        long long numsum=0;
////        long long nummax=0;
////        for (long long i=0;i<=num;i++){
////            numsum = sumN(i)+sumN(num-i);
////            nummax = max(numsum,nummax);
////        }
//    long long num;
//    cin>>num;
//    int rest = num - 9;
//    int nummax = 0;
//    nummax = sumN(rest);
//    nummax +=9;
//    cout<<nummax<<endl;
//    return 0;
//
//}
//long long get_ws(long long m)
//{
//    long long k = 0;
//    while (m>0)
//    {
//        m /= 10;
//        k = k*10+9;
//    }
//    return k/10;
//}
//
//int main()
//{
//    long long i,j,n,x,m,k;
//    cin>>n;
//    for (i=0;i<n;i++)
//    {
//        cin>>m;
//        if (m<19)
//        {
//            printf("%ld\n", m);
//            continue;
//        }
//        k=get_ws(m);
//        j=m-k;
//        x=0;
//        while (k>0)
//        {
//            x += k%10;
//            k/=10;
//        }
//        while (j>0)
//        {
//            x+=j%10;
//            j/=10;
//        }
//        printf("%ld\n", x);
//
//    }
//    return 0;
//}

/*
	0-1 背包问题（迭代版）
	输入：
		products_count：商品的数量
		capacity：背包的容量
		weight_array：商品重量数组
		value_array：商品价格数组
		result：结果数组
*/
//int fun(int n,int v,vector<int> weight,vector<int> price,vector<int> res){
//    for(int i=1;i<=n;++i){
//        for(int j=v;j>=weight[i];--j){//注意j必须从v开始
//            res[j] = max(res[j-weight[i]]+price[i],res[j]);
//        }
//    }
//    return res[v];
//}
//
//int main(){
//    int n,v;
//    cin>>n>>v;
//
//    vector<int> weight(n+1,0);
//    vector<int> price(n+1,0);
//    vector<int> res(v+1);
//
//    for(int i=1;i<=n;++i){
//        cin>>weight[i]>>price[i];
//    }
//
//    int ans = fun(n,v,weight,price,res);
//    cout<<ans<<endl;
//
//    return 0;
//}

//int main()
//{
//    const int mod = 1000000007;
//    int n, m;
//    cin >> n >> m;
//    vector<long long> nums;
//
//    long long tmp;
//    while (n--)
//    {
//        cin >> tmp;
//
//        if (tmp > m)
//        {
//            continue;
//        }
//        nums.emplace_back(tmp);
//    }
//    vector<long long> ans(m + 1, 0);
//    ans[0] = 1;
//    for (int j = 1; j <= m; ++j) {
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (j < nums[i])
//            {
//                continue;
//            }
//            ans[j] += ans[j - nums[i]] % mod;
//        }
//    }
//    long long c = ans[m] % mod;
//    cout << c << endl;
//    return 0;
//}
// 离质心最近的点
//class Solution {
//public:
//    int get_index(std::vector<std::string> points) {
//        int n = points.size();
//        double sumX=0,sumY=0;
//        double centerX, centerY;
//        vector<string> data;
//        for (int i=0;i<n;i++){
//            stringstream input(points[i]);
//            while (getline(input, points[i], ','))
//                data.push_back(points[i]);
//            sumX += stod(data[i+0]);
//            sumY += stod(data[i+1]);
//        }
//        centerX = sumX/stod(n);
//        centerY = sumY/stod(n);
//        for (int i=0;i<n;i++){
//
//        }
//
//        return 0;
//    }
//};
//
//int main(){
//    Solution S;
////    std::vector<std::string> points = ["1,1"]
//    S.get_index(["1,1"]);
//};

//int main() {
//    string raw_data("3, 4, 5, 76"), tmp;
//    vector<string> data;
//    stringstream input(raw_data);
//
//    while (getline(input, tmp, ','))
//        data.push_back(tmp);
//
//    for (auto s : data)
//        cout << stoi(s) << endl;
//
//    return 0;
//}

//int main(){
//    int n,x,y;
//    scanf("%d %d %d", &n,&x,&y);
//    for (int i=0;i<n;i++){
//
//    }
//
//}
//class Test
//{
//    static int x;
//public:
//    Test(){x++;}
//    static int getX(){return x;}
//};
//int Test::x=0;
//int main(){
//    cout<<Test::getX()<<" ";
//    Test t[5];
//    cout<<Test::getX();
//}
//int exgcd(int a,int b,int &x,int &y){
//    if(b==0){x=1;y=0;return a;}
//    int d=exgcd(b,a%b,y,x);
//    y-=a/b*x;
//    return d;
//}
//int main(){
//    int a,b;
//    cin>>a>>b;
//    int prod,j;
//    int max = 2000000000;
//
//    for (int i=1;i<max;i++){
//        prod = a*i;
//        j = prod%b;
//        if (j==1){
//            cout<<i;
//            return 0;
//        }
//    }
//}
////int main(){
//    double m;
//    cin>>m;
//
//}

# include <iostream>
using namespace std;
int extend_gcd(int a, int b, int &x, int &y) {
    if(b == 0) {
        x = 1; y = 0;
        return a;
    } else {
        int r = extend_gcd(b, a%b, x, y);
        int t = x - a / b * y;
        x = y; y = t;
        return r;
    }
}
int main() {
    int a, b, x, y;
    cin >> a >> b;
    extend_gcd(a, b, x, y);
    while(x < 0) x = x + b; // 如果 x < 0,则 x = x + b,下面证明。
    cout << x;
    return 0;
}