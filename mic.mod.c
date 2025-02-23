#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbc0f22cc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9d228bbe, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3a075eb2, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xad6dff3c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x646d2444, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0xbf30072f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xaab3b4ee, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x79470c13, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0x26965721, __VMLINUX_SYMBOL_STR(slow_virt_to_phys) },
	{ 0x70296fb4, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x56feb6f, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x63081ea7, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x672edad8, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xcaabf9d0, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xdeaef6df, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x87bf2365, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x537b1228, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xf9696887, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xd5aef55a, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc945fe7a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x313693ec, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x69bbbc57, __VMLINUX_SYMBOL_STR(mmu_notifier_register) },
	{ 0x3f821ac, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa9e08275, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3e2d0910, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa2ff9ec0, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9bb059e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xad27f361, __VMLINUX_SYMBOL_STR(__warn_printk) },
	{ 0xb63bafc8, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x4e536271, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xda2cab9d, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9150838, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xcdd7b7e7, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x43c51508, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbac852b9, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x57e0ff5d, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe4f742fb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x744cc231, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x778b8af3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e956db7, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xbbf0769e, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7dac5d96, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x50bef6a8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x1ca6c122, __VMLINUX_SYMBOL_STR(ex_handler_refcount) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x801440e8, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x2ea9c19f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x10c2b4ae, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd47efb31, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x2c8deb99, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x315a3d41, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfb104199, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xd15b5086, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x130ecf57, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa6682fdd, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb44ad4b3, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xa70c7720, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x49a96b1e, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x88d66c04, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x773bea03, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5b9b2745, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x4c9f33ce, __VMLINUX_SYMBOL_STR(__f_setown) },
	{ 0xfac4bd1e, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6fcb87a1, __VMLINUX_SYMBOL_STR(touch_softlockup_watchdog) },
	{ 0xfcaff078, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xf69463d0, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x3e01c363, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xe966901, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x104dbb0e, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x8a3b82f5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3ca30931, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x1da5f6d1, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd0b9e691, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x269ff28, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x7c8a978e, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2fb7f8e4, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x278c3b4a, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x14da80c0, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x5d2a0488, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xa23293e2, __VMLINUX_SYMBOL_STR(set_normalized_timespec64) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x13983e49, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xe180fb59, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0x6d2b8135, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x4dbed5b3, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x9c079d54, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x763a2d74, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x4226c0c9, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd44e7d7d, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc6451622, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0x2535a0be, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x29cbac03, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe45dd9c2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x36ebdb4b, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5d6f1d0e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x4430464f, __VMLINUX_SYMBOL_STR(put_zone_device_private_or_public_page) },
	{ 0x4e9653e8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x5199a55a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb1c3a01a, __VMLINUX_SYMBOL_STR(oops_in_progress) },
	{ 0x677ce6fc, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xad0c1696, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xece09564, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe201c4e4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x13208bfa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9cb986f2, __VMLINUX_SYMBOL_STR(vmalloc_base) },
	{ 0xd8af5d48, __VMLINUX_SYMBOL_STR(pci_reenable_device) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xac017790, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd8f0b079, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0x6a964a2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbc849b65, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x5430c92f, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x69adee5e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf65214c7, __VMLINUX_SYMBOL_STR(get_user_pages_remote) },
	{ 0x9591f320, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xcbd4898c, __VMLINUX_SYMBOL_STR(fortify_panic) },
	{ 0x4a34f06f, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x6be6e26, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x8b8ac835, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x7639e66b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x56321ae2, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7e8d43c6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6e300bec, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xa1ae6c7d, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xfe768495, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb9f18c1c, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xcd4b17e, __VMLINUX_SYMBOL_STR(remove_proc_subtree) },
	{ 0x237a015a, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x60efabde, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0xb43e08d0, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x3af63674, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xd96a7b5e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1addee63, __VMLINUX_SYMBOL_STR(schedule_hrtimeout_range) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x11f13787, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x29de961f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x759bd3a9, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x48498901, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x958ffe3a, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x8ec25549, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x85f6dbdc, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x9ed9e03e, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x4cc90ad5, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xd4fa5c30, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x714ec6a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x54f7950d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xad3aa90a, __VMLINUX_SYMBOL_STR(import_iovec) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa948e10, __VMLINUX_SYMBOL_STR(device_private_key) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5d8c8d31, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xba660b26, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x625094fd, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x9454ebf2, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e4aa776, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x739ead79, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x192e47ac, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x6bf7f3a7, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xa3c48df7, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xf402012c, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x3a4a0be6, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xdf41b52f, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa78265df, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2adcaac5, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "54F124D9AF7A67F2341A3A3");
