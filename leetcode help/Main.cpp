#include <iostream>
#include <algorithm>
#include <math.h>
#include "../../std_lib_facilities.h"
#include <unordered_set>
#include<set>
using namespace std;


/*
class Solution
{
public:
	int output = 0;
	int romanToInt(string s) { 
		
		for (int i = 0; i != s.length(); ++i) {

			if (s[i] == 'I') {
				if (s[i + 1] == 'V') {
					output += 4;
					i += 1;
					continue;
				}
				else if (s[i + 1] == 'X') {
					output += 9;
					i += 1;
					continue;
				}
				else
					output += 1;
			}
			if (s[i] == 'V') {
				output += 5;
			}
			if (s[i] == 'X') {
				if (s[i + 1] == 'L') {
					output += 40;
					i += 1;
					continue;
				}
				else if (s[i + 1] == 'C') {
					output += 90;
					i += 1;
					continue;
				}
				else
					output += 10;
			}
			if (s[i] == 'L') {
				output += 50;
			}
			if (s[i] == 'C') {
				if (s[i + 1] == 'D') {
					output += 400;
					i += 1;
					continue;
				}
				if (s[i + 1] == 'M') {
					output += 900;
					i += 1;
					continue;
				}
				else
					output += 100;
			}
			if (s[i] == 'D') {
				output += 500;
			}
			if (s[i] == 'M') {
				output += 1000;
			}
		}
		return output;
	}
};

int main()
{
	Solution s;
	int x = s.romanToInt("MCMXCIV");
	std::cout << x;
}

*/
/*
vector <int> twoSum(vector<int> nums, int target) {
	vector<int> returnedvalue;
	for (int i = 0; i != nums.size(); ++i) {
		for (int j = 0; j != nums.size(); ++j) {
			int number = nums[i];
			if (&nums[i] == &nums[j]) {
				continue;
			}
			if (target - number == nums[j]) {
				returnedvalue.push_back(i);
				returnedvalue.push_back(j);
				goto LOOPEXIT;
			}
		} 

	}
	LOOPEXIT: return returnedvalue;
}

int main() {
	vector <int> test_vector = { 3, 2, 4 };
	int target = 6;
	vector<int> x = twoSum(test_vector, target);
	for (int i = 0; i != x.size(); ++i) {
		cout << x[i];
	}
}
*/
/*
#include <iostream>
using namespace std;
#include <exception>

//123 % 10 = 3, 123 / 10 = 12. 12 % 10 = 2, 12/10 = 1
int reverse(int x) {
	int reverse = 0;
	while (x != 0) {
		int last_digit = x % 10;
		x = x / 10;
		if (reverse > INT_MAX/10) {
			return 0;
		}
		if (reverse < INT_MIN/10) {
			return 0;
		}
		reverse = reverse * 10 + last_digit;
	}
	return reverse;
}

int main() {
	try {
		long data;
		cout << "Enter a number";
		cin >> data;
		int y = reverse(data);
		cout << y;
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}
*/
/*
vector<vector<int>> threeSum(vector<int> nums) {
	vector<vector<int>> vect;
	vector<int> inner_vector;
	if (nums.size() > 2) {
		for (int i = 0; i != nums.size() - 2; ++i) {
			for (int j = i + 1; j < nums.size() - 1; ++j) {
				for (int k = j + 1; k < nums.size(); ++k) {
					inner_vector.clear();
					if (nums[i] + nums[j] + nums[k] == 0) {
						inner_vector.push_back(nums[i]);
						inner_vector.push_back(nums[j]);
						inner_vector.push_back(nums[k]);
						sort(inner_vector.begin(), inner_vector.end());
						bool found = true;
						for (int l = 0; l < vect.size(); ++l)
							if (inner_vector == vect[l])
							{
								found = false;
								break;
							}
						if (found)
							vect.push_back(inner_vector);
					}
				}
			}
		}
	}
	
	return vect;
}


int main() {
	vector <int> v = { -2,0,1,1,2 };
	vector<vector<int>> answer = threeSum(v);
	for (int i = 0; i != answer.size(); ++i) {
		for (int j = 0; j != answer[i].size(); ++j) {
			cout << answer[i][j] << " ";
		}
	}
}

*/
/*
void push(Node** head_ref, int new_data) {
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

int main() {
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;
}
*/
/*
int searchInsert(vector<int> nums, int target) {

	for (int i = 0; i != nums.size(); ++i) {
		if (target == nums[i]) {
			return i;
		}
		if (target < nums[0]) {
			return 0;
		}
		if (target > nums[nums.size() - 1]) {
			return nums.size();
		}
		if (target > nums[i] && target < nums[i + 1]) {
			return i + 1;
		}
		
	}
	return 0;
}

int main() {
	vector<int> test_nums = {1};
	int target = 2;

	int x = searchInsert(test_nums, target);
	cout << x;
}
*/
/*
int removeElement(vector<int>& nums, int val) {

	for (int i = 0; i != nums.size(); ++i) {
		if (val == nums[i]) {
			nums.erase(nums.begin()+i);
			i--;
		}
	}
	return nums.size();
}

int main() {
	vector<int> nums= { 1,1,1,2,2,3 };
	int val = 2;

	int x = removeElement(nums, val);
	cout << x;
}
*/
/*
int strStr(string haystack, string needle) {
	int count = 0;
	if (needle.length() == 0) {
		return 0;
	}
	for (int i = 0; i != haystack.length(); ++i) {
		if (haystack[i] == needle[0]) {
			for (int j = 0; j != needle.length(); ++j) {
				if (haystack[i + j] == needle[j]) {
					count += 1;
				}
				else {
					break;
				}
			}
			if (count == needle.length()) {
				return i;
			}
			count = 0;
		}	
	}
	return -1;
}

int main() {
	string haystack = "baabbbbababbbabab";
	string needle = "abbab";
	int x = strStr(haystack, needle);
	cout << x;
}
*/

/*
vector<vector<int>> permute(vector<int>& nums) {
	vector<vector<int>> result;
	vector<int> temp_vector;
	int count = 1;
	result.push_back(nums);

	for (int i = 0; i != nums.size(); ++i) {
		for (int j = 1; j != nums.size() - 1; ++j) {
			swap(nums[count], nums[j + count]);
			temp_vector.push_back(nums[i]);
			temp_vector.push_back(nums[j]);
			temp_vector.push_back(nums[j + count]);
			result.push_back(temp_vector);
			temp_vector.clear();
			swap(nums[count], nums[j + count]);
		}
		swap(nums[i], nums[count]);
	}
	return result;
}

int main() {
	vector<int> nums = { 1,2,3 };
	vector<vector<int>> test = permute(nums);
	for (int i = 0; i != test.size(); ++i) {
		for (int j = 0; j != test[i].size(); ++j) {
			cout << test[i][j] << " ";
		}
	}
}
*/

/*
bool isPalindrome(int x) {
	string palindrome = to_string(x);
	if (palindrome.length() == 1) {
		return true;
	}

	while (palindrome.front() == palindrome.back()) {
		palindrome.erase(palindrome.begin());
		palindrome.pop_back();
		if (palindrome.size() <= 1) {
			return true;
		}
	}


	return false;
}

int main() {
	int x = 0;
	bool y = isPalindrome(x);
	if (y == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
*/
/*
int lengthOfLastWord(string s) {
	int count = 0;
	if (s.length() == 0) {
		return 0;
	}
	

	for (int i = s.length() - 1 ; i >= 0; --i) {
		if (s[i] != ' ') {
			count += 1;
			if (i != 0 && s[i - 1] == ' ') {
				break;
			}
		}
	}
	return count;
}

int main() {
	string s = " ";
	cout << s.length();
	int x = lengthOfLastWord(s);
	cout << x;
}
*/

/*
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int j = 0;
	for (int i = m; i != nums1.size(); ++i) {
		if (j <= nums2.size()) {
			nums1[i] = nums2[j];
			j++;
		}
	}
	sort(nums1.begin(), nums1.end());
}
*/
/*
struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));

	node->data = data;

	node->left = NULL;
	node->right = NULL;
	return node;
}

bool isSameTree(node *p, node *q) {
	if (p == NULL && q == NULL) {
		return true;
	}
	if (p == NULL || q == NULL) {
		return false;
	}
	if (p->data != q->data) {
		return false;
	}

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);

	struct node *root1 = newNode(1);
	root1->left = newNode(2);
	root1->right = newNode(3);

	bool z = isSameTree(root, root1);
	if (z == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
*/

/*
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode *head = new ListNode;
	ListNode *tmpr = head;

	while (l1 != NULL && l2 != NULL) {
		if ((l1->val) > (l2->val)) {
			tmpr->next = new ListNode(l2->val);
			l2 = l2->next;
		}
		else {
			tmpr->next = new ListNode(l1->val);
			l1 = l1->next;
		}

		tmpr = tmpr->next;
	}

	if (l1 != NULL) {
		tmpr->next = l1;
	}
	else {
		tmpr->next = l2;
	}

	return head->next;
}


int main() {
	ListNode *l1 = NULL;
	ListNode *l1two = NULL;
	ListNode *l1three = NULL;
	l1 = new ListNode();
	l1two = new ListNode();
	l1three = new ListNode();

	l1->val = 1; // assign data in first node 
	l1->next = l1two; // Link first node with second 

	l1two->val = 2; // assign data to second node 
	l1two->next = l1three;

	l1three->val = 3; // assign data to third node 
	l1three->next = NULL;

	ListNode *l2 = NULL;
	ListNode *l2two = NULL;
	ListNode *l2three = NULL;
	l2 = new ListNode();
	l2two = new ListNode();
	l2three = new ListNode();

	l2->val = 4; // assign data in first node 
	l2->next = l2two; // Link first node with second 

	l2two->val = 5; // assign data to second node 
	l2two->next = l2three;

	l2three->val = 6; // assign data to third node 
	l2three->next = NULL;

	mergeTwoLists(l1, l2);
	return 0;
}
*/
/*
int mySqrt(int x) {
	int result = 0;

	result = floor(sqrt(x));
	return result;
}



int main() {
	int x = 4;
	int y = mySqrt(x);

	cout << y;
}
*/



/*
string addBinary(string a, string b) {
	string result;
	string test;
	int carry = 0;
	
	while (a.length() >= 1 && b.length() >= 1) {
		char lastA = a.back() - '0';
		char lastB = b.back() - '0';
		
		int sum = lastA + lastB + carry;
		
		if (sum == 0) {
			sum = 0;
			carry = 0;
		}
		if (sum == 1) {
			sum = 1;
			carry = 0;
		}
		if (sum == 2) {
			sum = 0;
			carry = 1 ;
		}
		if (sum == 3) {
			sum = 1;
			carry = 1;
		}

		a.pop_back();
		b.pop_back();
		test = to_string(sum);
		result.insert(0,test);
	}

	while (a.empty() == true && b.empty() == false) {
		char lastB = b.back() - '0';
		if (carry == 1) {
			if (carry + lastB == 2) {
				result.insert(0,to_string(0));
				carry = 1;
			}
			else {
				result.insert(0,to_string(1));
				carry = 0;
			}
			b.pop_back();
		}
		if (carry == 0) {
			result.insert(0, b);
			break;
		}
	}
	

	while (b.empty() == true && a.empty() == false) {
		char lastA = a.back() - '0';
		if (carry == 1) {
			if (carry + lastA == 2) {
				result.insert(0,to_string(0));
				carry = 1;
			}
			else {
				result.insert(0,to_string(1));
				carry = 0;
			}
			a.pop_back();
		}
		if (carry == 0) {
			result.insert(0, a);
			break;
		}
	}
	

	if (a.empty() == true && b.empty() == true && carry == 1) {
		result.insert(0, to_string(1));
	}
	return result;
}

int main() {
	string a = "101111";
	string b = "10";
	string x = addBinary(a, b);
	cout << x;
}
*/
/*
bool isValid(string s) {
	vector<char> test_bracket;
	

	for (int i = 0; i != s.length(); ++i) {
		if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
			if (test_bracket.empty() == true) {
				return false;
			}
		}
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			test_bracket.push_back(s[i]);
		}

		if (s[i] == ')') {
			if (test_bracket.back() == '(') {
				test_bracket.pop_back();
			}
		}
		if (s[i] == ']') {
			if (test_bracket.back() == '[') {
				test_bracket.pop_back();
			}

		}
		if (s[i] == '}') {
			if (test_bracket.back() == '{') {
				test_bracket.pop_back();
			}
		}
	}
	if (test_bracket.empty() == false) {
		return false;
	}

	return true;
}

int main() {
	string bracket = "(])";
	bool valid = isValid(bracket);
	if (valid == true)
		cout << "true";
	else
		cout << "false";
}
*/
/*
int maxArea(vector<int> height) {
	int area = 0;
	int temp_check = 0;
	int position;



	while (height.size() > 2) {

		position = height.size() - 1;

		if (height[0] > height.back()) {
			area = position * height.back();
			height.pop_back();
		}
		else if(height.back() > height[0] || height.back() == height[0]) {
			area = position * height[0];
			height.erase(height.begin());
		}
		if (temp_check > area) {
			goto SKIP;
		}
		temp_check = area;
		SKIP:;
	}

	return temp_check;
}

int main() {
	vector<int> test = { 1,8,6,2,5,4,8,3,7 };
	int x = maxArea(test);
	cout << x;
}

*/
/*
double myPow(double x, long long int n) {
	if (n == 1) {
		return x;
	}
	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return (1/x) * myPow(x, n + 1);
	}

	return x * myPow(x, n - 1);
}

int main() {
	double test = 0.00001;
	int n = 2147483647;
	double x = myPow(test, n);
	cout << x;
}
*/
/*
vector<int> searchRange(vector<int>& nums, int target) {
	vector<int> answer = {-1,-1};

	for (int i = 0; i != nums.size(); ++i) {
		if (nums[i] == target) {
			answer[0] = i;
			break;
		}
	}

	for (int j = nums.size() - 1; j >= 0; --j) {
		if (nums[j] == target) {
			answer[1] = j;
			break;
		}
	}
	return answer;
}

int main() {
	vector<int> test = { 5,7,7,8,8,10 };
	int target = 8;
	vector<int> answer = searchRange(test, 8);
	for (int i = 0; i != answer.size(); ++i) {
		cout << answer[i];
	}
}
*/





/*
int firstDigit(int number) {
	int first = number;
	while (first >= 10) {
		first = first / 10;
	}
	return first;
}

vector<int> plusOne(vector<int>& digits) {

	vector<int> temp_vector;
	int x = digits.back();
	int y = digits[0];

	if (digits.size() == 1 && digits[0] == 9) {
		digits.clear();
		digits.push_back(1);
		digits.push_back(0);
		return digits;
	}

	if (x == 9) {
		for (int i = digits.size() - 1; i >= 0; --i) {

			if (digits[i] >= 9) {

				digits[i] = 0;
				if (&digits[i] != &digits[0]) {
					digits[i - 1] += 1;
					if (digits.back() == 0 && digits[i - 1] <= 9) {
						break;
					}
				}
			}


			if (digits[0] % 10 == 0) {
				int z = firstDigit(digits[0]);
				digits[0] = 0;
				//insert first digit
				digits.insert(digits.begin(), z);
			}
		}
	}
	else {
		digits.pop_back();
		x = x + 1;
		digits.push_back(x);
	}
	return digits;
}

int main() {
	vector<int> test = { 2,4,9,3,9 };
	vector<int> print = plusOne(test);
	for (int i = 0; i != print.size(); ++i) {
		cout << print[i];
	}
}
*/
/*
int maxProfit(vector<int>& prices) {

	int maxprofit = 0;
	int minprice = INT_MAX;

	for (int i = 0; i != prices.size(); ++i) {
		if (prices[i] < minprice) {
			minprice = prices[i];
		}
		else if(maxprofit < prices[i] - minprice){
			maxprofit = prices[i] - minprice;
		}
	}
	return maxprofit;
}

int main() {
	vector<int> prices = {7,1,5,3,6,4};
	int x = maxProfit(prices);
	cout << x;
}
*/


/*
class LinkedList {
	// Struct inside the class LinkedList
	// This is one node which is not needed by the caller. It is just
	// for internal work.
	struct Node {
		int x;
		Node *next;
	};

	// public member
public:
	// constructor
	LinkedList() {
		head = NULL; // set head to NULL
	}


	// This prepends a new value at the beginning of the list
	void addValue(int val) {
		Node *n = new Node();   // create new Node
		n->x = val;             // set value
		n->next = head;         // make the node point to the next node.
								//  If the list is empty, this is NULL, so the end of the list --> OK
		head = n;               // last but not least, make the head point at the new node.
	}

	// returns the first element in the list and deletes the Node.
	int popValue() {
		Node *n = head;
		int ret = n->x;

		head = head->next;
		delete n;
		return ret;
	}

	Node* addTwoNumbers(Node* l1, Node* l2) {
		Node first_digit = l1.popValue();
	}

	// private member
private:
	Node *head; // this is the private member variable. It is just a pointer to the first Node
};



int main() {
	LinkedList list1, list2, list3;

	list1.addValue(1);
	list1.addValue(2);
	list1.addValue(3);

	list2.addValue(2);
	list2.addValue(3);
	list2.addValue(4);



	cout << list1.popValue() << endl;
	cout << list1.popValue() << endl;
	cout << list1.popValue() << endl;
	
}
*/
/*
bool isPalindrome(string s) {
	int i = 0;
	int j = s.length() - 1;

	while (i != j) {
		if (j < i) {
			break;
		}
		while (isalnum(s[i]) == false && i < s.length()) {
			i++;
		}
		while (isalnum(s[j]) == false && j > 0) {
			j--;
		}

		s[i] = tolower(s[i]);
		s[j] = tolower(s[j]);

		if (isalnum(s[i]) == false && isalnum(s[j]) == false) {
			return true;
		}

		if (s[i] == s[j]) {
			i++;
			j--;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {
	string s = ".,";

	bool test = isPalindrome(s);

	if (test == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}
*/

/*
struct Node {
	int data;
	struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
	
	struct Node* new_node = new Node;


	new_node->data = new_data;

	
	new_node->next = (*head_ref);

	
	(*head_ref) = new_node;
}


bool detectLoop(struct Node* h)
{
	unordered_set<Node*> s;
	while (h != NULL) {
	
		if (s.find(h) != s.end())
			return true;

	
		s.insert(h);

		h = h->next;
	}

	return false;
}


int main()
{

	struct Node* head = NULL;

	push(&head, 1);
	push(&head, 2);


	if (detectLoop(head))
		cout << "Loop found";
	else
		cout << "No Loop";

	return 0;
}
*/

/*
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	
};

ListNode* deleteDuplicates(ListNode* head) {
	ListNode* dummy = head;

	while (head->next != NULL && head != NULL) {
		if (head->val == head->next->val) {
			dummy->next = head->next->next;
		}
		else {
			head = head->next;
		}
	}
	return dummy;
}
*/

/*
int strStr(string haystack, string needle) {

	int m = haystack.length();
	int n = needle.length();
	int count = 0;

	if (n == 0) {
		return 0;
	}

	if (m < n) {
		return -1;
	}

	for (int i = 0; i <= m - n; ++i) {
		count = 0;
		for (int j = 0; j != n; ++j) {
			if (haystack[i + j] != needle[j]) {
				break;
			}
			count++;
		}
		if (count == n) {
			return i;
		}
	}

	return -1;
}

int main() {
	string haystack = "mississippi";
	string needle = "issip";
	int x = strStr(haystack, needle);
	cout << x;
}
*/

/*
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	
};

ListNode* recursiveAdd(ListNode *l1, ListNode *l2, int carry) {
	ListNode* ans = new ListNode();

	if (l1 == NULL || l2 == NULL) {
		if (carry > 0) {
			return new ListNode(carry);
		}
		else {
			return NULL;
		}
	}

	ans->val = l1->val + l2->val + carry;
	carry = ans->val / 10;
	ans->val = ans->val % 10;
	

	ans->next = recursiveAdd(l1->next, l2->next, carry);

	return ans;
}

int main() {

	ListNode* head = NULL;
	ListNode* second = NULL;
	ListNode* third = NULL;
	
	ListNode* head1 = NULL;
	ListNode* second1 = NULL;
	ListNode* third1 = NULL;

	head = new ListNode();
	second = new ListNode();
	third = new ListNode();

	head1 = new ListNode();
	second1 = new ListNode();
	third1 = new ListNode();

	head->val = 3; 
	head->next = second;

	second->val = 7;
	second->next = NULL;
	
	third->val = 3;
	third->next = NULL;
	

	head1->val = 9;
	head1->next = second1;

	second1->val = 2;
	second1->next = NULL;
	second1->next = third1;

	third1->val = 4;
	third1->next = NULL;


	recursiveAdd(head, head1, 0);

	return 0;
}
*/

/*
int lengthOfLongestSubstring(string s) {
	int longest_length = 0;
	int temp_length = 0;
	int j = 1;
	vector<char> hold;

	for (int i = 0; i != s.length(); ++i) {
		char value = s[i];

		if (find(hold.begin(), hold.end(), value) != hold.end()) {
			if (temp_length > longest_length) {
				;
			}
			else {
				temp_length = longest_length;
			}
			i = (i - hold.size());
			hold.clear();
		}
		else {
			hold.push_back(value);
			longest_length = hold.size();
		}

	}
	if (temp_length > longest_length) {
		return temp_length;
	}
	return longest_length;
}

int main() {
	string s = "aab";
	int x = lengthOfLongestSubstring(s);
	cout << x;
}
*/
/*
int lengthOfLongestSubstring(string s) {

	int ans = 0, i = 0, j = 0, temp_ans = 0;

	set<char> character;

	while (i != s.length() && j != s.length()) {
		if (character.find(s[j]) != character.end()) {
			character.erase(s[i]);
			i++;
		}
		else {
			character.insert(s[j]);
			j++;
			ans = j - i;
			if (temp_ans > ans) {
				;
			}
			else {
				temp_ans = ans;
			}
		}
	}

	return temp_ans;
}

int main() {
	string s = "abcabab";
	int x = lengthOfLongestSubstring(s);
	cout << x;
}
*/

/*
bool isValidSudoku(vector<vector<char>>& board) {
	return isValidanswer(board, 9);
}

bool isValidanswer(vector<vector<char>>& board, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (isValid(board, i, j) == false) {
				return false;
			}
		}
	}

	return true;
}

bool isValid(vector<vector<char>>& board, int row, int col) {
	return checkrow(board, row) &&
		checkcolumn(board, col) &&
		check3x3(board, row - row % 3, col - col % 3);
}

bool checkrow(vector<vector<char>>& board, int row) {
	set<char> checkrow;

	for (int i = 0; i != 9; ++i) {
		if (checkrow.find(board[row][i]) != checkrow.end()) {
			return false;
		}
		if (board[row][i] != '.') {
			checkrow.insert(board[row][i]);
		}
	}
	return true;
}

bool checkcolumn(vector<vector<char>>& board, int col) {
	set<char> checkcolumn;
	for (int i = 0; i != 9; ++i) {
		if (checkcolumn.find(board[i][col]) != checkcolumn.end()) {
			return false;
		}
		if (board[i][col] != '.') {
			checkcolumn.insert(board[i][col]);
		}
	}

	return true;
}

bool check3x3(vector<vector<char>>& board, int row, int col) {
	set <char> check3x3;

	for (int i = 0; i != 3; ++i) {
		for (int j = 0; j != 3; ++j) {
			if (check3x3.find(board[i][j]) != check3x3.end()) {
				return false;
			}
			if (board[i][j] != '.') {
				check3x3.insert(board[i][j]);
			}
		}
	}

	return true;
}

int ans(int x,int y){
	return x + y;
}
int main(){
	int x = 3, y = 5;
	int z = ans(x,y);
	cout << z;
	return 0;
}
*/

/*
string longestCommonPrefix(vector<string>& strs) {
	string ans, temp_ans;

	for (int i = 0; i != strs.size() - 1; ++i) {
		for (int j = 0; j != strs[i].length(); ++j) {
			if (strs[0][j] == strs[i + 1][j]) {
				temp_ans.push_back(strs[0][j]);
			}
			else {
				break;
			}
			if (j == strs[0].length() - 1 || j == strs[i + 1].length() - 1) {
				break;
			}
		}
		if (i == 0) {
			ans = temp_ans;
		}
		if(ans.length() >= temp_ans.length()){
			ans = temp_ans;
		}
		temp_ans = "";
	}

	return ans;
}

int main() {
	vector<string> strs;
	strs.push_back("flower");
	strs.push_back("flow");
	strs.push_back("flight");

	string x = longestCommonPrefix(strs);
	cout << x;
}
*/

/*
int singleNumber(vector<int>& nums) {
	set<int> s;
	int result = nums[0];

	for (int i = 0; i != nums.size(); i++) {
		if (s.find(nums[i]) != s.end()) {
			s.erase(nums[i]);
		}
		else {
			s.insert(nums[i]);
		}
	}

	for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
		result = *i;
	}

	return result;
}

int main() {
	vector<int> nums = { 2,2,1 };
	int x = singleNumber(nums);
	cout << x; 
}
*/

/*
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	
};
struct TreeNode* newNode(int data)
{
	// Allocate memory for new node  
	struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));

	// Assign data to this node 
	node->val = data;

	// Initialize left and right children as NULL 
	node->left = NULL;
	node->right = NULL;
	return(node);
}
bool symmetry(TreeNode *root1, TreeNode *root2) {
	if (root1 == NULL && root2 == NULL) {
		return true;
	}
	if (root1 == NULL || root2 == NULL) {
		return false;
	}

	return (root1->val == root2->val && symmetry(root1->left, root2->right) && symmetry(root1->right, root2->left));
}
bool isSymmetric(TreeNode* root) {

	return symmetry(root, root);
}

int main() {
	TreeNode *x = newNode(1);
	x->left = newNode(2);
	x->right = newNode(2);
	x->left->left = newNode(3);
	x->left->right= newNode(4);
	x->right->left = newNode(4);
	x->right->right = newNode(3);

	bool y = isSymmetric(x);
	if (y == true) {
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}
	
}
*/




