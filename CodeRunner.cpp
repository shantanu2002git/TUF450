#include <bits/stdc++.h>
using namespace std;
auto start = chrono::steady_clock::now();

#define ll long long
#define __power(x, y) pow(x, y);
#define __sqroot(x) sqrt(x);
#define __sqrn(x) pow(x, 2);
#define __gcd(x, y) __gcd(x, y);
#define __lcm(x, y) (x * y) / __gcd(x, y);
#define __ceil(x) ceil(x); //5.678 -- 6
#define __floor(x) floor(x); // 5.678--5
#define __max(x, y) max(x, y);
#define __min(x, y) min(x, y);
#define __mxmi(x, y) (x > y) ? x : y;
#define __abs(x) abs(x); // NEG[-]->POS[+]
#define substr(x, y) substr(x, y); // msg.substr(3, 4)  // indx 3 to size of 4 string
#define insert(x, y) insert(x, y); // msg.insert(3, "insert")  // insert after pos 3
#define inar_1n(i,n) for(int i=0; i<n; i++);
#define inar_n1(i,n) for(int i=n-1; i>=0; i--);

#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
 /*....................STL...................*/
//#define binary_search(vc.begin(),vc.end(),66)



bool myComp(const pair<ll, ll>& a, const pair<ll, ll>& b){ if (a.first != b.first)  return a.first > b.first;  return a.second < b.second;}

int sizArr(int a)
{
  return sizeof(a) / sizeof(int);
};

#define substr(x, y) substr(x, y); // msg.substr(3, 4)  // indx 3 to size of 4 string
#define insert(x, y) insert(x, y); // msg.insert(3, "insert")  // insert after pos 3

bool isPrime(int n){
//since 0 and 1 is not prime return false.
if(n==1||n==0)return false;

//Run a loop from 2 to square root of n.
for(int i=2; i*i<=n; i++){
	// if the number is divisible by i, then n is not a prime number.
	if(n%i==0)return false;
}
//otherwise, n is prime number.
return true;
}
void primeNo(int n){
	for(int i=1; i<=n; i++){
	//check if current number is prime
	if(isPrime(i)) {
		cout << i << " ";
	}
	}
}
string to_binary(int n){
   int decimal = n;
    const int k = 10;
 
    string binary = bitset<k>(decimal).to_string();//bitset<k>(n).to_string()
    return binary; /*Binary string to INT   stoi(binary)*/
}
bool is_fib(int n){
  if(n<=2 && n>=0){
    return 1;
  }
  int a=0,b=1,c;
  while(1){
    c=a+b;
    a=b;
    b=c;
    if(c==n){
      return 1;
    }else if(c>n){
      return 0;
    }
  }
}

/*MATRIX FORMAT 4 DIRECTION :: */
int dx4[4]={1,-1,0,0};
int dy4[4]={0,0,1,-1};

/*MATRIX 8 DIRECTION :: */
int dx8[8]={1,1,1,0,0,0,-1,-1};
//int dx8[8]={};

bool valid_2D(int x, int y, int n,int m){
  return (x>=0 && x<n && y>=0 && y<m);
}
bool can_form_palindrome(int arr[], int n)
{
   
    string str = "";
    for (int i = 0; i < n; i++) {
        str += arr[i];
    }
    map<int,int>freq;
    for (int i = 0; str[i]; i++) {
        freq[str[i]]++;
    }
    int count = 0;
 
    
    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] & 1) {
            count++;// Count odd occurring characters
        }
        if (count > 1) {
            return false;
        }
    }
    // Return true if odd count is 0 or 1,
    return true;
}

/*
msg.substr(3,4)
msg.append("End")



Comparing with another string:
int compare(string another); Compare the content of this string with
the given another & return 0 if equals;
a negative value if this string is less than another; positive value otherwise.

== and != Operators   Compare the contents of two strings

string str1("Hello"), str2("Hallo"), str3("hello"), str4("Hello");
cout << str1.compare(str2) << endl;   // 1   'e' > 'a'
cout << str1.compare(str3) << endl;   // -1  'h' < 'H'
cout << str1.compare(str4) << endl;   // 0

// You can also use the operator == or !=
if (str1 == str2) cout << "Same" << endl;
if (str3 != str4) cout << "Different" << endl;
cout << boolalpha;  // print bool as true/false
cout << (str1 != str2) << endl;
cout << (str1 == str4) << endl;



Search/Replacing characters: You can use the functions available in the <algorithm> such as replace(). For example,

#include <algorithm>
......
string str("Code Quotient");
replace(str.begin(), str.end(), 'o', '_');
cout << str << endl;      // "C_de Qu_tient"



char name[100]={0};//string with space
	cout<<"Enter your name: ";
	cin.getline(name,100);



*/

void posiAlphaOrder(char ch){
    cout<<(ch & 31);
}
void erase_eleV(vector<int>nums, int position){
  auto it=nums.begin()+position;
  nums.erase(it);

   for(auto it : nums){
    cout<<it<<" -- ";
  }
  return ;
}
bool find_Vec(vector<int> &v, int x)
{
  if (find(v.begin(), v.end(), x) != v.end())
    return true;
  return false;
}
int  find_idxVC(vector<int> &v, int x){
auto it=find(v.begin(), v.end(),x);
if(it!=v.end()){
  int idx=it-v.begin();
  return idx;
}else{
  return -1;
}
}
 // find_map(m,30)<<endl;
bool find_map(map<int, int> &m, int x)
{
  if (m.find(x) != m.end())
    return true;
  return false;
} //<find_Vec(vc,30)<<endl;
bool find_set(set<int> &s, int x)
{
  return (s.find(x) != s.end());
}
/****************************************------- PREFIX  @@@ SUFIX --------*******************************************************/
vector<int> prefixsum(vector<int>vi){
  vector<int>res(vi.size());
  partial_sum(vi.begin(),vi.end(),res.begin());
  return res;

}

vector<int>sufixsum(vector<int>vi){
  vector<int>res(vi.size());
  reverse(vi.begin(),vi.end());
  partial_sum(vi.begin(),vi.end(),res.begin());
  return res;
}

/****************************************----------GRAPH--------*******************************************************/

/*
1.BFS   2. DFS   3. TOPO SORT 4. 

*/

void dfs(int node, vector<int> adj[], vector<int> &visited, stack<int> &s)
{
  visited[node] = 1;
  for (auto i : adj[node])
  {
    if (!visited[i])
    {
      dfs(i, adj, visited, s);
    }
    s.push(node);
  }
}
// BFS KHANS ALGO
vector<int> khan_topoSort(int V, vector<int> adj[])
{
  vector<int> topo;
  vector<int> indegree(V, 0);
  for (int i = 0; i < V; i++)
  {
    for (int u : adj[i])
    {
      indegree[u]++;
    }
  }
  queue<int> q;
  for (int i = 0; i < V; i++)
  {
    if (indegree[i] == 0)
    {
      q.push(i);
    }
  }
  while (!q.empty())
  {
    int top = q.front();
    q.pop();
    topo.push_back(top);
    for (int u : adj[top])
    {
      indegree[u]--;
      if (!indegree[u])
        q.push(u);
    }
  }
  return topo;
  //if(topo.size()==v) return true  // topo sort is valid on graph or not [ graph is sycalic or not]
}
vector<int> dfs_topoSort(int V, vector<int> adj[])
{
  vector<int> visited(V);
  stack<int> s;
  for (int i = 0; i < V; i++)
  {
    if (!visited[i])
      dfs(i, adj, visited, s);
  }

  vector<int> ans;
  while (!s.empty())
  {
    ans.push_back(s.top());
    s.pop();
  }
  return ans;
}
















int main()
{
  vector<int>vc{1,3,6,2};
  int arr[3]={1,3,2};

cout<<2/3;
  return 0;
}