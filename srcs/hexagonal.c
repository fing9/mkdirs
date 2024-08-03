#include "hexagonal.h"

void mkdirHandleError(char *dir_path, int permission)
{
	if (mkdir(dir_path, permission) == -1)
	{
		perror("mkdir error");
		exit(errno);
	}
}

void make_hexagonal_dirs(char *root_dir_name)
{
	char cwd[1024];

	// Get the current working directory
	if (getcwd(cwd, sizeof(cwd)) == NULL)
	{
		perror("getcwd error");
		exit(errno);
	}

	// Create the root directory
	char root_dir_path[1024];
	snprintf(root_dir_path, sizeof(root_dir_path), "%s/%s", cwd, root_dir_name);
	mkdirHandleError(root_dir_path, 0777);
	printf("[PATH] %s\n", root_dir_path);

	// Adapter
	char adapter_dir_path[1024];
	char adapter_in_dir_path[1024];
	char adapter_out_dir_path[1024];

	snprintf(adapter_dir_path, sizeof(adapter_dir_path), "%s/adapter", root_dir_path);
	snprintf(adapter_in_dir_path, sizeof(adapter_in_dir_path), "%s/adapter/in", root_dir_path);
	snprintf(adapter_out_dir_path, sizeof(adapter_out_dir_path), "%s/adapter/out", root_dir_path);

	mkdirHandleError(adapter_dir_path, 0777);
	mkdirHandleError(adapter_in_dir_path, 0777);
	mkdirHandleError(adapter_out_dir_path, 0777);

	// Application
	char application_dir_path[1024];
	char application_port_dir_path[1024];
	char application_port_in_dir_path[1024];
	char application_port_out_dir_path[1024];
	char application_service_dir_path[1024];

	snprintf(application_dir_path, sizeof(application_dir_path), "%s/application", root_dir_path);
	snprintf(application_port_dir_path, sizeof(application_port_dir_path), "%s/application/port", root_dir_path);
	snprintf(application_port_in_dir_path, sizeof(application_port_in_dir_path), "%s/application/port/in", root_dir_path);
	snprintf(application_port_out_dir_path, sizeof(application_port_out_dir_path), "%s/application/port/out", root_dir_path);
	snprintf(application_service_dir_path, sizeof(application_service_dir_path), "%s/application/service", root_dir_path);

	mkdirHandleError(application_dir_path, 0777);
	mkdirHandleError(application_port_dir_path, 0777);
	mkdirHandleError(application_port_in_dir_path, 0777);
	mkdirHandleError(application_port_out_dir_path, 0777);
	mkdirHandleError(application_service_dir_path, 0777);

	// Domain
	char domain_dir_path[1024];
	char domain_entity_dir_path[1024];

	snprintf(domain_dir_path, sizeof(domain_dir_path), "%s/domain", root_dir_path);
	snprintf(domain_entity_dir_path, sizeof(domain_entity_dir_path), "%s/domain/entity", root_dir_path);

	mkdirHandleError(domain_dir_path, 0777);
	mkdirHandleError(domain_entity_dir_path, 0777);

	// Infrastructure
	char infrastructure_dir_path[1024];
	char infrastructure_repository_dir_path[1024];

	snprintf(infrastructure_dir_path, sizeof(infrastructure_dir_path), "%s/infrastructure", root_dir_path);
	snprintf(infrastructure_repository_dir_path, sizeof(infrastructure_repository_dir_path), "%s/infrastructure/repository", root_dir_path);

	mkdirHandleError(infrastructure_dir_path, 0777);
	mkdirHandleError(infrastructure_repository_dir_path, 0777);
}
