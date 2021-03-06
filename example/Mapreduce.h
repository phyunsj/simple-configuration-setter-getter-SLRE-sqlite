//
// 
// PLEASE DO NOT EDIT THIS FILE. AUTO-GENERATED.
//



#define MAPREDUCE_TASK_IO_SORT_MB_MIN 0
#define MAPREDUCE_TASK_IO_SORT_MB_MAX 255
#define MAPREDUCE_TASK_IO_SORT_MB_DEFAULT 100
#define MAPREDUCE_TASK_IO_SORT_MB_VALID_FLAG   (0x1 << 0)
#define MAPREDUCE_TASK_IO_SORT_MB_RANGE_ERROR 301

#define MAPREDUCE_MAP_SORT_SPILL_PERCENT_MIN 0
#define MAPREDUCE_MAP_SORT_SPILL_PERCENT_MAX 100
#define MAPREDUCE_MAP_SORT_SPILL_PERCENT_DEFAULT 80
#define MAPREDUCE_MAP_SORT_SPILL_PERCENT_VALID_FLAG   (0x1 << 1)
#define MAPREDUCE_MAP_SORT_SPILL_PERCENT_RANGE_ERROR 302

#define MAPREDUCE_TASK_IO_SORT_FACTOR_MIN 0
#define MAPREDUCE_TASK_IO_SORT_FACTOR_MAX 255
#define MAPREDUCE_TASK_IO_SORT_FACTOR_DEFAULT 100
#define MAPREDUCE_TASK_IO_SORT_FACTOR_VALID_FLAG   (0x1 << 2)
#define MAPREDUCE_TASK_IO_SORT_FACTOR_RANGE_ERROR 303

#define MAPREDUCE_MAP_COMBINE_MINSPILLS_MIN 0
#define MAPREDUCE_MAP_COMBINE_MINSPILLS_MAX 255
#define MAPREDUCE_MAP_COMBINE_MINSPILLS_DEFAULT 3
#define MAPREDUCE_MAP_COMBINE_MINSPILLS_VALID_FLAG   (0x1 << 3)
#define MAPREDUCE_MAP_COMBINE_MINSPILLS_RANGE_ERROR 304

#define MAPREDUCE_CLUSTER_LOCAL_DIR_MIN 0
#define MAPREDUCE_CLUSTER_LOCAL_DIR_MAX 100
#define MAPREDUCE_CLUSTER_LOCAL_DIR_DEFAULT  "/mapred/local"
#define MAPREDUCE_CLUSTER_LOCAL_DIR_VALID_FLAG   (0x1 << 4)
#define MAPREDUCE_CLUSTER_LOCAL_DIR_RANGE_ERROR 305

#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_MIN 0
#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_ENUM_FALSE 0
#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_ENUM_TRUE 1
#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_MAX 1
#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_DEFAULT 0
#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_VALID_FLAG   (0x1 << 5)
#define MAPREDUCE_REDUCE_MERGE_MEMTOMEM_ENABLED_RANGE_ERROR 306

#define MAPREDUCE_FRAMEWORK_NAME_MIN 0
#define MAPREDUCE_FRAMEWORK_NAME_MAX 255
#define MAPREDUCE_FRAMEWORK_NAME_DEFAULT  "yarn/local"
#define MAPREDUCE_FRAMEWORK_NAME_VALID_FLAG   (0x1 << 6)
#define MAPREDUCE_FRAMEWORK_NAME_RANGE_ERROR 307

#define MAPREDUCE_REDUCE_SHUFFLE_PARALLELCOPIES_MIN 0
#define MAPREDUCE_REDUCE_SHUFFLE_PARALLELCOPIES_MAX 255
#define MAPREDUCE_REDUCE_SHUFFLE_PARALLELCOPIES_DEFAULT 5
#define MAPREDUCE_REDUCE_SHUFFLE_PARALLELCOPIES_VALID_FLAG   (0x1 << 7)
#define MAPREDUCE_REDUCE_SHUFFLE_PARALLELCOPIES_RANGE_ERROR 308

#define MAPREDUCE_REDUCE_MEMORY_TOTALBYTES_MIN 0
#define MAPREDUCE_REDUCE_MEMORY_TOTALBYTES_MAX 2048
#define MAPREDUCE_REDUCE_MEMORY_TOTALBYTES_DEFAULT 1024
#define MAPREDUCE_REDUCE_MEMORY_TOTALBYTES_VALID_FLAG   (0x1 << 8)
#define MAPREDUCE_REDUCE_MEMORY_TOTALBYTES_RANGE_ERROR 309

#define MAPREDUCE_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT_MIN 0
#define MAPREDUCE_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT_MAX 100
#define MAPREDUCE_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT_DEFAULT 70
#define MAPREDUCE_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT_VALID_FLAG   (0x1 << 9)
#define MAPREDUCE_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT_RANGE_ERROR 310

#define MAPREDUCE_JOB_UBERTASK_MAXMAPS_MIN 0
#define MAPREDUCE_JOB_UBERTASK_MAXMAPS_MAX 20
#define MAPREDUCE_JOB_UBERTASK_MAXMAPS_DEFAULT 9
#define MAPREDUCE_JOB_UBERTASK_MAXMAPS_VALID_FLAG   (0x1 << 10)
#define MAPREDUCE_JOB_UBERTASK_MAXMAPS_RANGE_ERROR 311

#define MAPREDUCE_JOB_UBERTASK_ENABLE_MIN 0
#define MAPREDUCE_JOB_UBERTASK_ENABLE_ENUM_ENABLE 0
#define MAPREDUCE_JOB_UBERTASK_ENABLE_ENUM_DISABLE 1
#define MAPREDUCE_JOB_UBERTASK_ENABLE_MAX 1
#define MAPREDUCE_JOB_UBERTASK_ENABLE_DEFAULT 1
#define MAPREDUCE_JOB_UBERTASK_ENABLE_VALID_FLAG   (0x1 << 11)
#define MAPREDUCE_JOB_UBERTASK_ENABLE_RANGE_ERROR 312

#define MAPREDUCE_JOB_UBERTASK_MAXBYTES_MIN 0
#define MAPREDUCE_JOB_UBERTASK_MAXBYTES_MAX 2048
#define MAPREDUCE_JOB_UBERTASK_MAXBYTES_DEFAULT 256
#define MAPREDUCE_JOB_UBERTASK_MAXBYTES_VALID_FLAG   (0x1 << 12)
#define MAPREDUCE_JOB_UBERTASK_MAXBYTES_RANGE_ERROR 313

#define MAPREDUCE_MAP_MEMORY_MB_MIN 0
#define MAPREDUCE_MAP_MEMORY_MB_MAX 2048
#define MAPREDUCE_MAP_MEMORY_MB_DEFAULT 1024
#define MAPREDUCE_MAP_MEMORY_MB_VALID_FLAG   (0x1 << 13)
#define MAPREDUCE_MAP_MEMORY_MB_RANGE_ERROR 314

#define MAPREDUCE_REDUCE_MEMORY_MB_MIN 0
#define MAPREDUCE_REDUCE_MEMORY_MB_MAX 2048
#define MAPREDUCE_REDUCE_MEMORY_MB_DEFAULT 1024
#define MAPREDUCE_REDUCE_MEMORY_MB_VALID_FLAG   (0x1 << 14)
#define MAPREDUCE_REDUCE_MEMORY_MB_RANGE_ERROR 315            

class Mapreduce {

public:

    Mapreduce();
   ~Mapreduce();

    
	int task_io_sort_mb;
	int map_sort_spill_percent;
	int task_io_sort_factor;
	int map_combine_minspills;
	void set_cluster_local_dir(std::string new_cluster_local_dir) { cluster_local_dir = new_cluster_local_dir; }
	int reduce_merge_memtomem_enabled;
	std::string framework_name;
	int reduce_shuffle_parallelcopies;
	void set_reduce_memory_totalbytes(int new_reduce_memory_totalbytes) { reduce_memory_totalbytes = new_reduce_memory_totalbytes; }
	int reduce_shuffle_memory_limit_percent;
	int job_ubertask_maxmaps;
	int job_ubertask_enable;
	void set_job_ubertask_maxbytes(int new_job_ubertask_maxbytes) { job_ubertask_maxbytes = new_job_ubertask_maxbytes; }
	int map_memory_mb;
	int reduce_memory_mb;
    
	void CLEAR_VALID_BIT() { valid = 0; }
	void SET_ALL_VALID_BIT() { valid = 0xFFFFFFFF; }

	std::string UPDATE_STMT();
	void UPDATE_STMT_PRE();
	std::string SELECT_STMT();
	void SELECT_STMT_PRE();

	void SET_VALID_BIT_TASK_IO_SORT_MB();
	void SET_CHANGE_BIT_TASK_IO_SORT_MB();
	void SET_VALID_BIT_MAP_SORT_SPILL_PERCENT();
	void SET_CHANGE_BIT_MAP_SORT_SPILL_PERCENT();
	void SET_VALID_BIT_TASK_IO_SORT_FACTOR();
	void SET_CHANGE_BIT_TASK_IO_SORT_FACTOR();
	void SET_VALID_BIT_MAP_COMBINE_MINSPILLS();
	void SET_CHANGE_BIT_MAP_COMBINE_MINSPILLS();
	void SET_VALID_BIT_CLUSTER_LOCAL_DIR();
	void SET_CHANGE_BIT_CLUSTER_LOCAL_DIR();
	void SET_VALID_BIT_REDUCE_MERGE_MEMTOMEM_ENABLED();
	void SET_CHANGE_BIT_REDUCE_MERGE_MEMTOMEM_ENABLED();
	void SET_VALID_BIT_FRAMEWORK_NAME();
	void SET_CHANGE_BIT_FRAMEWORK_NAME();
	void SET_VALID_BIT_REDUCE_SHUFFLE_PARALLELCOPIES();
	void SET_CHANGE_BIT_REDUCE_SHUFFLE_PARALLELCOPIES();
	void SET_VALID_BIT_REDUCE_MEMORY_TOTALBYTES();
	void SET_CHANGE_BIT_REDUCE_MEMORY_TOTALBYTES();
	void SET_VALID_BIT_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT();
	void SET_CHANGE_BIT_REDUCE_SHUFFLE_MEMORY_LIMIT_PERCENT();
	void SET_VALID_BIT_JOB_UBERTASK_MAXMAPS();
	void SET_CHANGE_BIT_JOB_UBERTASK_MAXMAPS();
	void SET_VALID_BIT_JOB_UBERTASK_ENABLE();
	void SET_CHANGE_BIT_JOB_UBERTASK_ENABLE();
	void SET_VALID_BIT_JOB_UBERTASK_MAXBYTES();
	void SET_CHANGE_BIT_JOB_UBERTASK_MAXBYTES();
	void SET_VALID_BIT_MAP_MEMORY_MB();
	void SET_CHANGE_BIT_MAP_MEMORY_MB();
	void SET_VALID_BIT_REDUCE_MEMORY_MB();
	void SET_CHANGE_BIT_REDUCE_MEMORY_MB();
	int rangeCheck( ) { /* not implemented */ return 300; }

private:
    
	unsigned int valid;
	std::string cluster_local_dir; /* internal parameter. filled by system call() */
	int reduce_memory_totalbytes;  /* internal parameter. filled by system call() */
	int job_ubertask_maxbytes;  /* internal parameter. filled by system call() */
    
};

