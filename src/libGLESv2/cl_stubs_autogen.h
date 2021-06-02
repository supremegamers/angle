// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from cl.xml.
//
// Copyright 2021 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// cl_stubs_autogen.h: Stubs for CL entry points.

#ifndef LIBGLESV2_CL_STUBS_AUTOGEN_H_
#define LIBGLESV2_CL_STUBS_AUTOGEN_H_

#include "libANGLE/CLtypes.h"

namespace cl
{
cl_int IcdGetPlatformIDsKHR(cl_uint num_entries, cl_platform_id *platforms, cl_uint *num_platforms);
cl_int GetPlatformIDs(cl_uint num_entries, cl_platform_id *platforms, cl_uint *num_platforms);
cl_int GetPlatformInfo(cl_platform_id platform,
                       PlatformInfo param_namePacked,
                       size_t param_value_size,
                       void *param_value,
                       size_t *param_value_size_ret);
cl_int GetDeviceIDs(cl_platform_id platform,
                    DeviceType device_typePacked,
                    cl_uint num_entries,
                    cl_device_id *devices,
                    cl_uint *num_devices);
cl_int GetDeviceInfo(cl_device_id device,
                     DeviceInfo param_namePacked,
                     size_t param_value_size,
                     void *param_value,
                     size_t *param_value_size_ret);
cl_int CreateSubDevices(cl_device_id in_device,
                        const cl_device_partition_property *properties,
                        cl_uint num_devices,
                        cl_device_id *out_devices,
                        cl_uint *num_devices_ret);
cl_int RetainDevice(cl_device_id device);
cl_int ReleaseDevice(cl_device_id device);
cl_int SetDefaultDeviceCommandQueue(cl_context context,
                                    cl_device_id device,
                                    cl_command_queue command_queue);
cl_int GetDeviceAndHostTimer(cl_device_id device,
                             cl_ulong *device_timestamp,
                             cl_ulong *host_timestamp);
cl_int GetHostTimer(cl_device_id device, cl_ulong *host_timestamp);
cl_context CreateContext(const cl_context_properties *properties,
                         cl_uint num_devices,
                         const cl_device_id *devices,
                         void(CL_CALLBACK *pfn_notify)(const char *errinfo,
                                                       const void *private_info,
                                                       size_t cb,
                                                       void *user_data),
                         void *user_data,
                         cl_int &errorCode);
cl_context CreateContextFromType(const cl_context_properties *properties,
                                 DeviceType device_typePacked,
                                 void(CL_CALLBACK *pfn_notify)(const char *errinfo,
                                                               const void *private_info,
                                                               size_t cb,
                                                               void *user_data),
                                 void *user_data,
                                 cl_int &errorCode);
cl_int RetainContext(cl_context context);
cl_int ReleaseContext(cl_context context);
cl_int GetContextInfo(cl_context context,
                      ContextInfo param_namePacked,
                      size_t param_value_size,
                      void *param_value,
                      size_t *param_value_size_ret);
cl_int SetContextDestructorCallback(cl_context context,
                                    void(CL_CALLBACK *pfn_notify)(cl_context context,
                                                                  void *user_data),
                                    void *user_data);
cl_command_queue CreateCommandQueueWithProperties(cl_context context,
                                                  cl_device_id device,
                                                  const cl_queue_properties *properties,
                                                  cl_int &errorCode);
cl_int RetainCommandQueue(cl_command_queue command_queue);
cl_int ReleaseCommandQueue(cl_command_queue command_queue);
cl_int GetCommandQueueInfo(cl_command_queue command_queue,
                           CommandQueueInfo param_namePacked,
                           size_t param_value_size,
                           void *param_value,
                           size_t *param_value_size_ret);
cl_mem CreateBuffer(cl_context context,
                    MemFlags flagsPacked,
                    size_t size,
                    void *host_ptr,
                    cl_int &errorCode);
cl_mem CreateBufferWithProperties(cl_context context,
                                  const cl_mem_properties *properties,
                                  MemFlags flagsPacked,
                                  size_t size,
                                  void *host_ptr,
                                  cl_int &errorCode);
cl_mem CreateSubBuffer(cl_mem buffer,
                       MemFlags flagsPacked,
                       cl_buffer_create_type buffer_create_type,
                       const void *buffer_create_info,
                       cl_int &errorCode);
cl_mem CreateImage(cl_context context,
                   MemFlags flagsPacked,
                   const cl_image_format *image_format,
                   const cl_image_desc *image_desc,
                   void *host_ptr,
                   cl_int &errorCode);
cl_mem CreateImageWithProperties(cl_context context,
                                 const cl_mem_properties *properties,
                                 MemFlags flagsPacked,
                                 const cl_image_format *image_format,
                                 const cl_image_desc *image_desc,
                                 void *host_ptr,
                                 cl_int &errorCode);
cl_mem CreatePipe(cl_context context,
                  MemFlags flagsPacked,
                  cl_uint pipe_packet_size,
                  cl_uint pipe_max_packets,
                  const cl_pipe_properties *properties,
                  cl_int &errorCode);
cl_int RetainMemObject(cl_mem memobj);
cl_int ReleaseMemObject(cl_mem memobj);
cl_int GetSupportedImageFormats(cl_context context,
                                MemFlags flagsPacked,
                                MemObjectType image_typePacked,
                                cl_uint num_entries,
                                cl_image_format *image_formats,
                                cl_uint *num_image_formats);
cl_int GetMemObjectInfo(cl_mem memobj,
                        MemInfo param_namePacked,
                        size_t param_value_size,
                        void *param_value,
                        size_t *param_value_size_ret);
cl_int GetImageInfo(cl_mem image,
                    ImageInfo param_namePacked,
                    size_t param_value_size,
                    void *param_value,
                    size_t *param_value_size_ret);
cl_int GetPipeInfo(cl_mem pipe,
                   PipeInfo param_namePacked,
                   size_t param_value_size,
                   void *param_value,
                   size_t *param_value_size_ret);
cl_int SetMemObjectDestructorCallback(cl_mem memobj,
                                      void(CL_CALLBACK *pfn_notify)(cl_mem memobj, void *user_data),
                                      void *user_data);
void *SVMAlloc(cl_context context, SVM_MemFlags flagsPacked, size_t size, cl_uint alignment);
void SVMFree(cl_context context, void *svm_pointer);
cl_sampler CreateSamplerWithProperties(cl_context context,
                                       const cl_sampler_properties *sampler_properties,
                                       cl_int &errorCode);
cl_int RetainSampler(cl_sampler sampler);
cl_int ReleaseSampler(cl_sampler sampler);
cl_int GetSamplerInfo(cl_sampler sampler,
                      SamplerInfo param_namePacked,
                      size_t param_value_size,
                      void *param_value,
                      size_t *param_value_size_ret);
cl_program CreateProgramWithSource(cl_context context,
                                   cl_uint count,
                                   const char **strings,
                                   const size_t *lengths,
                                   cl_int &errorCode);
cl_program CreateProgramWithBinary(cl_context context,
                                   cl_uint num_devices,
                                   const cl_device_id *device_list,
                                   const size_t *lengths,
                                   const unsigned char **binaries,
                                   cl_int *binary_status,
                                   cl_int &errorCode);
cl_program CreateProgramWithBuiltInKernels(cl_context context,
                                           cl_uint num_devices,
                                           const cl_device_id *device_list,
                                           const char *kernel_names,
                                           cl_int &errorCode);
cl_program CreateProgramWithIL(cl_context context,
                               const void *il,
                               size_t length,
                               cl_int &errorCode);
cl_int RetainProgram(cl_program program);
cl_int ReleaseProgram(cl_program program);
cl_int BuildProgram(cl_program program,
                    cl_uint num_devices,
                    const cl_device_id *device_list,
                    const char *options,
                    void(CL_CALLBACK *pfn_notify)(cl_program program, void *user_data),
                    void *user_data);
cl_int CompileProgram(cl_program program,
                      cl_uint num_devices,
                      const cl_device_id *device_list,
                      const char *options,
                      cl_uint num_input_headers,
                      const cl_program *input_headers,
                      const char **header_include_names,
                      void(CL_CALLBACK *pfn_notify)(cl_program program, void *user_data),
                      void *user_data);
cl_program LinkProgram(cl_context context,
                       cl_uint num_devices,
                       const cl_device_id *device_list,
                       const char *options,
                       cl_uint num_input_programs,
                       const cl_program *input_programs,
                       void(CL_CALLBACK *pfn_notify)(cl_program program, void *user_data),
                       void *user_data,
                       cl_int &errorCode);
cl_int SetProgramReleaseCallback(cl_program program,
                                 void(CL_CALLBACK *pfn_notify)(cl_program program, void *user_data),
                                 void *user_data);
cl_int SetProgramSpecializationConstant(cl_program program,
                                        cl_uint spec_id,
                                        size_t spec_size,
                                        const void *spec_value);
cl_int UnloadPlatformCompiler(cl_platform_id platform);
cl_int GetProgramInfo(cl_program program,
                      ProgramInfo param_namePacked,
                      size_t param_value_size,
                      void *param_value,
                      size_t *param_value_size_ret);
cl_int GetProgramBuildInfo(cl_program program,
                           cl_device_id device,
                           ProgramBuildInfo param_namePacked,
                           size_t param_value_size,
                           void *param_value,
                           size_t *param_value_size_ret);
cl_kernel CreateKernel(cl_program program, const char *kernel_name, cl_int &errorCode);
cl_int CreateKernelsInProgram(cl_program program,
                              cl_uint num_kernels,
                              cl_kernel *kernels,
                              cl_uint *num_kernels_ret);
cl_kernel CloneKernel(cl_kernel source_kernel, cl_int &errorCode);
cl_int RetainKernel(cl_kernel kernel);
cl_int ReleaseKernel(cl_kernel kernel);
cl_int SetKernelArg(cl_kernel kernel, cl_uint arg_index, size_t arg_size, const void *arg_value);
cl_int SetKernelArgSVMPointer(cl_kernel kernel, cl_uint arg_index, const void *arg_value);
cl_int SetKernelExecInfo(cl_kernel kernel,
                         KernelExecInfo param_namePacked,
                         size_t param_value_size,
                         const void *param_value);
cl_int GetKernelInfo(cl_kernel kernel,
                     KernelInfo param_namePacked,
                     size_t param_value_size,
                     void *param_value,
                     size_t *param_value_size_ret);
cl_int GetKernelArgInfo(cl_kernel kernel,
                        cl_uint arg_index,
                        KernelArgInfo param_namePacked,
                        size_t param_value_size,
                        void *param_value,
                        size_t *param_value_size_ret);
cl_int GetKernelWorkGroupInfo(cl_kernel kernel,
                              cl_device_id device,
                              KernelWorkGroupInfo param_namePacked,
                              size_t param_value_size,
                              void *param_value,
                              size_t *param_value_size_ret);
cl_int GetKernelSubGroupInfo(cl_kernel kernel,
                             cl_device_id device,
                             KernelSubGroupInfo param_namePacked,
                             size_t input_value_size,
                             const void *input_value,
                             size_t param_value_size,
                             void *param_value,
                             size_t *param_value_size_ret);
cl_int WaitForEvents(cl_uint num_events, const cl_event *event_list);
cl_int GetEventInfo(cl_event event,
                    EventInfo param_namePacked,
                    size_t param_value_size,
                    void *param_value,
                    size_t *param_value_size_ret);
cl_event CreateUserEvent(cl_context context, cl_int &errorCode);
cl_int RetainEvent(cl_event event);
cl_int ReleaseEvent(cl_event event);
cl_int SetUserEventStatus(cl_event event, cl_int execution_status);
cl_int SetEventCallback(cl_event event,
                        cl_int command_exec_callback_type,
                        void(CL_CALLBACK *pfn_notify)(cl_event event,
                                                      cl_int event_command_status,
                                                      void *user_data),
                        void *user_data);
cl_int GetEventProfilingInfo(cl_event event,
                             ProfilingInfo param_namePacked,
                             size_t param_value_size,
                             void *param_value,
                             size_t *param_value_size_ret);
cl_int Flush(cl_command_queue command_queue);
cl_int Finish(cl_command_queue command_queue);
cl_int EnqueueReadBuffer(cl_command_queue command_queue,
                         cl_mem buffer,
                         cl_bool blocking_read,
                         size_t offset,
                         size_t size,
                         void *ptr,
                         cl_uint num_events_in_wait_list,
                         const cl_event *event_wait_list,
                         cl_event *event);
cl_int EnqueueReadBufferRect(cl_command_queue command_queue,
                             cl_mem buffer,
                             cl_bool blocking_read,
                             const size_t *buffer_origin,
                             const size_t *host_origin,
                             const size_t *region,
                             size_t buffer_row_pitch,
                             size_t buffer_slice_pitch,
                             size_t host_row_pitch,
                             size_t host_slice_pitch,
                             void *ptr,
                             cl_uint num_events_in_wait_list,
                             const cl_event *event_wait_list,
                             cl_event *event);
cl_int EnqueueWriteBuffer(cl_command_queue command_queue,
                          cl_mem buffer,
                          cl_bool blocking_write,
                          size_t offset,
                          size_t size,
                          const void *ptr,
                          cl_uint num_events_in_wait_list,
                          const cl_event *event_wait_list,
                          cl_event *event);
cl_int EnqueueWriteBufferRect(cl_command_queue command_queue,
                              cl_mem buffer,
                              cl_bool blocking_write,
                              const size_t *buffer_origin,
                              const size_t *host_origin,
                              const size_t *region,
                              size_t buffer_row_pitch,
                              size_t buffer_slice_pitch,
                              size_t host_row_pitch,
                              size_t host_slice_pitch,
                              const void *ptr,
                              cl_uint num_events_in_wait_list,
                              const cl_event *event_wait_list,
                              cl_event *event);
cl_int EnqueueFillBuffer(cl_command_queue command_queue,
                         cl_mem buffer,
                         const void *pattern,
                         size_t pattern_size,
                         size_t offset,
                         size_t size,
                         cl_uint num_events_in_wait_list,
                         const cl_event *event_wait_list,
                         cl_event *event);
cl_int EnqueueCopyBuffer(cl_command_queue command_queue,
                         cl_mem src_buffer,
                         cl_mem dst_buffer,
                         size_t src_offset,
                         size_t dst_offset,
                         size_t size,
                         cl_uint num_events_in_wait_list,
                         const cl_event *event_wait_list,
                         cl_event *event);
cl_int EnqueueCopyBufferRect(cl_command_queue command_queue,
                             cl_mem src_buffer,
                             cl_mem dst_buffer,
                             const size_t *src_origin,
                             const size_t *dst_origin,
                             const size_t *region,
                             size_t src_row_pitch,
                             size_t src_slice_pitch,
                             size_t dst_row_pitch,
                             size_t dst_slice_pitch,
                             cl_uint num_events_in_wait_list,
                             const cl_event *event_wait_list,
                             cl_event *event);
cl_int EnqueueReadImage(cl_command_queue command_queue,
                        cl_mem image,
                        cl_bool blocking_read,
                        const size_t *origin,
                        const size_t *region,
                        size_t row_pitch,
                        size_t slice_pitch,
                        void *ptr,
                        cl_uint num_events_in_wait_list,
                        const cl_event *event_wait_list,
                        cl_event *event);
cl_int EnqueueWriteImage(cl_command_queue command_queue,
                         cl_mem image,
                         cl_bool blocking_write,
                         const size_t *origin,
                         const size_t *region,
                         size_t input_row_pitch,
                         size_t input_slice_pitch,
                         const void *ptr,
                         cl_uint num_events_in_wait_list,
                         const cl_event *event_wait_list,
                         cl_event *event);
cl_int EnqueueFillImage(cl_command_queue command_queue,
                        cl_mem image,
                        const void *fill_color,
                        const size_t *origin,
                        const size_t *region,
                        cl_uint num_events_in_wait_list,
                        const cl_event *event_wait_list,
                        cl_event *event);
cl_int EnqueueCopyImage(cl_command_queue command_queue,
                        cl_mem src_image,
                        cl_mem dst_image,
                        const size_t *src_origin,
                        const size_t *dst_origin,
                        const size_t *region,
                        cl_uint num_events_in_wait_list,
                        const cl_event *event_wait_list,
                        cl_event *event);
cl_int EnqueueCopyImageToBuffer(cl_command_queue command_queue,
                                cl_mem src_image,
                                cl_mem dst_buffer,
                                const size_t *src_origin,
                                const size_t *region,
                                size_t dst_offset,
                                cl_uint num_events_in_wait_list,
                                const cl_event *event_wait_list,
                                cl_event *event);
cl_int EnqueueCopyBufferToImage(cl_command_queue command_queue,
                                cl_mem src_buffer,
                                cl_mem dst_image,
                                size_t src_offset,
                                const size_t *dst_origin,
                                const size_t *region,
                                cl_uint num_events_in_wait_list,
                                const cl_event *event_wait_list,
                                cl_event *event);
void *EnqueueMapBuffer(cl_command_queue command_queue,
                       cl_mem buffer,
                       cl_bool blocking_map,
                       MapFlags map_flagsPacked,
                       size_t offset,
                       size_t size,
                       cl_uint num_events_in_wait_list,
                       const cl_event *event_wait_list,
                       cl_event *event,
                       cl_int &errorCode);
void *EnqueueMapImage(cl_command_queue command_queue,
                      cl_mem image,
                      cl_bool blocking_map,
                      MapFlags map_flagsPacked,
                      const size_t *origin,
                      const size_t *region,
                      size_t *image_row_pitch,
                      size_t *image_slice_pitch,
                      cl_uint num_events_in_wait_list,
                      const cl_event *event_wait_list,
                      cl_event *event,
                      cl_int &errorCode);
cl_int EnqueueUnmapMemObject(cl_command_queue command_queue,
                             cl_mem memobj,
                             void *mapped_ptr,
                             cl_uint num_events_in_wait_list,
                             const cl_event *event_wait_list,
                             cl_event *event);
cl_int EnqueueMigrateMemObjects(cl_command_queue command_queue,
                                cl_uint num_mem_objects,
                                const cl_mem *mem_objects,
                                MemMigrationFlags flagsPacked,
                                cl_uint num_events_in_wait_list,
                                const cl_event *event_wait_list,
                                cl_event *event);
cl_int EnqueueNDRangeKernel(cl_command_queue command_queue,
                            cl_kernel kernel,
                            cl_uint work_dim,
                            const size_t *global_work_offset,
                            const size_t *global_work_size,
                            const size_t *local_work_size,
                            cl_uint num_events_in_wait_list,
                            const cl_event *event_wait_list,
                            cl_event *event);
cl_int EnqueueNativeKernel(cl_command_queue command_queue,
                           void(CL_CALLBACK *user_func)(void *),
                           void *args,
                           size_t cb_args,
                           cl_uint num_mem_objects,
                           const cl_mem *mem_list,
                           const void **args_mem_loc,
                           cl_uint num_events_in_wait_list,
                           const cl_event *event_wait_list,
                           cl_event *event);
cl_int EnqueueMarkerWithWaitList(cl_command_queue command_queue,
                                 cl_uint num_events_in_wait_list,
                                 const cl_event *event_wait_list,
                                 cl_event *event);
cl_int EnqueueBarrierWithWaitList(cl_command_queue command_queue,
                                  cl_uint num_events_in_wait_list,
                                  const cl_event *event_wait_list,
                                  cl_event *event);
cl_int EnqueueSVMFree(cl_command_queue command_queue,
                      cl_uint num_svm_pointers,
                      void *svm_pointers[],
                      void(CL_CALLBACK *pfn_free_func)(cl_command_queue queue,
                                                       cl_uint num_svm_pointers,
                                                       void *svm_pointers[],
                                                       void *user_data),
                      void *user_data,
                      cl_uint num_events_in_wait_list,
                      const cl_event *event_wait_list,
                      cl_event *event);
cl_int EnqueueSVMMemcpy(cl_command_queue command_queue,
                        cl_bool blocking_copy,
                        void *dst_ptr,
                        const void *src_ptr,
                        size_t size,
                        cl_uint num_events_in_wait_list,
                        const cl_event *event_wait_list,
                        cl_event *event);
cl_int EnqueueSVMMemFill(cl_command_queue command_queue,
                         void *svm_ptr,
                         const void *pattern,
                         size_t pattern_size,
                         size_t size,
                         cl_uint num_events_in_wait_list,
                         const cl_event *event_wait_list,
                         cl_event *event);
cl_int EnqueueSVMMap(cl_command_queue command_queue,
                     cl_bool blocking_map,
                     MapFlags flagsPacked,
                     void *svm_ptr,
                     size_t size,
                     cl_uint num_events_in_wait_list,
                     const cl_event *event_wait_list,
                     cl_event *event);
cl_int EnqueueSVMUnmap(cl_command_queue command_queue,
                       void *svm_ptr,
                       cl_uint num_events_in_wait_list,
                       const cl_event *event_wait_list,
                       cl_event *event);
cl_int EnqueueSVMMigrateMem(cl_command_queue command_queue,
                            cl_uint num_svm_pointers,
                            const void **svm_pointers,
                            const size_t *sizes,
                            MemMigrationFlags flagsPacked,
                            cl_uint num_events_in_wait_list,
                            const cl_event *event_wait_list,
                            cl_event *event);
void *GetExtensionFunctionAddressForPlatform(cl_platform_id platform, const char *func_name);
cl_int SetCommandQueueProperty(cl_command_queue command_queue,
                               CommandQueueProperties propertiesPacked,
                               cl_bool enable,
                               cl_command_queue_properties *old_properties);
cl_mem CreateImage2D(cl_context context,
                     MemFlags flagsPacked,
                     const cl_image_format *image_format,
                     size_t image_width,
                     size_t image_height,
                     size_t image_row_pitch,
                     void *host_ptr,
                     cl_int &errorCode);
cl_mem CreateImage3D(cl_context context,
                     MemFlags flagsPacked,
                     const cl_image_format *image_format,
                     size_t image_width,
                     size_t image_height,
                     size_t image_depth,
                     size_t image_row_pitch,
                     size_t image_slice_pitch,
                     void *host_ptr,
                     cl_int &errorCode);
cl_int EnqueueMarker(cl_command_queue command_queue, cl_event *event);
cl_int EnqueueWaitForEvents(cl_command_queue command_queue,
                            cl_uint num_events,
                            const cl_event *event_list);
cl_int EnqueueBarrier(cl_command_queue command_queue);
cl_int UnloadCompiler();
void *GetExtensionFunctionAddress(const char *func_name);
cl_command_queue CreateCommandQueue(cl_context context,
                                    cl_device_id device,
                                    CommandQueueProperties propertiesPacked,
                                    cl_int &errorCode);
cl_sampler CreateSampler(cl_context context,
                         cl_bool normalized_coords,
                         AddressingMode addressing_modePacked,
                         FilterMode filter_modePacked,
                         cl_int &errorCode);
cl_int EnqueueTask(cl_command_queue command_queue,
                   cl_kernel kernel,
                   cl_uint num_events_in_wait_list,
                   const cl_event *event_wait_list,
                   cl_event *event);
}  // namespace cl
#endif  // LIBGLESV2_CL_STUBS_AUTOGEN_H_
