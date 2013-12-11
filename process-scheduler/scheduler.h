typedef char String[256];

typedef struct{
	String name;
	int time;
	int priority;
	void* nextProcess;
} Process;

typedef struct{
	void* head;
	int total;
	int timeSlice;
} Scheduler;

Process* newProcess(String name,int time,int priority);
Scheduler* createScheduler(int timeSlice);
int insertProcess(Scheduler* scheduler,Process* process);