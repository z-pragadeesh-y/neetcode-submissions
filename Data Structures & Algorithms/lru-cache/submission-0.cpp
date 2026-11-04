class LRUCache {
private:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = NULL;
            next = NULL;
        }
    };

    int capacity;
    unordered_map<int, Node*> mp;

    Node* head;
    Node* tail;

    // Remove a node from the linked list
    void removeNode(Node* node) {
        Node* before = node->prev;
        Node* after = node->next;

        before->next = after;
        after->prev = before;
    }

    // Insert a node immediately after head
    void insertFront(Node* node) {
        Node* after = head->next;

        node->next = after;
        node->prev = head;

        head->next = node;
        after->prev = node;
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }

        Node* node = mp[key];

        removeNode(node);
        insertFront(node);

        return node->value;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];

            node->value = value;

            removeNode(node);
            insertFront(node);

            return;
        }

        // Create a new node
        Node* node = new Node(key, value);

        mp[key] = node;
        insertFront(node);

        // Remove least recently used node if capacity exceeded
        if (mp.size() > capacity) {
            Node* lru = tail->prev;

            removeNode(lru);

            mp.erase(lru->key);

            delete lru;
        }
    }
};